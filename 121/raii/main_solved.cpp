#include <iostream>
#include <stdexcept>
#include <string>

// ==========================================
// PART 1: THE CLASS IMPLEMENTATION
// ==========================================

class IntArrayWrapper {
private:
    int* dataPtr;
    int size;

public:
    // IMPLEMENTED: Constructor
    IntArrayWrapper(int n) {
        size = n;
        dataPtr = new int[n]; // 1. Acquire resource
        std::cout << "  [RAII] Resource Acquired (Allocated " << n << " ints)\n";
    }

    // IMPLEMENTED: Destructor
    ~IntArrayWrapper() {
        // 2. Release resource
        // Note: checking for nullptr is safe but strictly not required 
        // as delete[] handles null pointers safely in C++.
        delete[] dataPtr; 
        std::cout << "  [RAII] Resource Released (Memory freed!)\n";
    }

    // Helper function
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            dataPtr[index] = value;
        }
    }

    // Disable Copying (Rule of 3/5 prevention for CPSC 121 scope)
    IntArrayWrapper(const IntArrayWrapper&) = delete;
    IntArrayWrapper& operator=(const IntArrayWrapper&) = delete;
};

// ==========================================
// PART 2: THE SCENARIOS
// ==========================================

// SCENARIO A: The "Old Way" (Leak)
void leakyFunction() {
    std::cout << "\n--- Running Leaky Function ---\n";
    
    int* myNumbers = new int[10]; 
    std::cout << "  [Manual] Memory allocated.\n";

    myNumbers[0] = 5;

    // Error occurs -> exits function -> delete[] is SKIPPED
    throw std::runtime_error("Critical error in Leaky Function!");

    delete[] myNumbers; 
    std::cout << "  [Manual] Memory freed.\n";
}

// SCENARIO B: The "RAII Way" (Fixed)
void safeFunction() {
    std::cout << "\n--- Running Safe Function ---\n";

    // SOLUTION: Use the wrapper instead of raw pointer
    // This creates the object on the Stack, which manages Heap memory
    IntArrayWrapper wrapper(10);
    
    // Use the helper method
    wrapper.setValue(0, 99);

    // Error occurs -> Stack Unwinding -> wrapper Destructor called -> Memory Freed
    throw std::runtime_error("Critical error in Safe Function!");
}

// ==========================================
// MAIN TESTING SUITE 
// ==========================================
int main() {
    // Test 1: The Leaky Function
    try {
        leakyFunction();
    } catch (const std::exception& e) {
        std::cout << "  [Main] Caught exception: " << e.what() << "\n";
        std::cout << "  (Notice: No 'Memory freed' message above. That is a LEAK.)\n";
    }

    std::cout << "\n" << std::string(40, '-') << "\n";

    // Test 2: The Safe Function
    try {
        safeFunction();
    } catch (const std::exception& e) {
        std::cout << "  [Main] Caught exception: " << e.what() << "\n";
        std::cout << "  (You should see '[RAII] Resource Released' above!)\n";
    }

    return 0;
}
