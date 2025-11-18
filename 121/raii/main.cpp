#include <iostream>
#include <stdexcept>

// ==========================================
// PART 1: THE CLASS TO IMPLEMENT
// ==========================================

class IntArrayWrapper {
private:
    int* dataPtr;
    int size;

public:
    // TODO 1: Implement the Constructor
    // 1. Initialize the 'size' variable.
    // 2. Allocate a dynamic array of integers (new int[n]) and store in 'dataPtr'.
    // 3. Print "  [RAII] Resource Acquired (Allocated memory)" to the console.
    IntArrayWrapper(int n) {
        // -- YOUR CODE HERE --
        
    }

    // TODO 2: Implement the Destructor
    // 1. Check if dataPtr is not nullptr (good practice).
    // 2. Release the memory using delete[].
    // 3. Print "  [RAII] Resource Released (Memory freed!)" to the console.
    ~IntArrayWrapper() {
        // -- YOUR CODE HERE --
        
    }

    // Helper function to show the object is working
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            dataPtr[index] = value;
        }
    }

    // NOTE: We disable Copying for this exercise to prevent "Double Free" errors.
    // (You will learn how to handle Deep Copies in a future lesson!)
    IntArrayWrapper(const IntArrayWrapper&) = delete;
    IntArrayWrapper& operator=(const IntArrayWrapper&) = delete;
};

// ==========================================
// PART 2: THE SCENARIOS
// ==========================================

// SCENARIO A: The "Old Way" (Has a Bug!)
void leakyFunction() {
    std::cout << "\n--- Running Leaky Function ---\n";
    
    // 1. Manual Allocation
    int* myNumbers = new int[10]; 
    std::cout << "  [Manual] Memory allocated.\n";

    // 2. Simulate work
    myNumbers[0] = 5;

    // 3. An error occurs!
    // The function exits HERE. The 'delete[]' line below is never reached.
    throw std::runtime_error("Critical error in Leaky Function!");

    // 4. Manual Cleanup (MISSED)
    delete[] myNumbers; 
    std::cout << "  [Manual] Memory freed.\n";
}

// SCENARIO B: The "RAII Way" (You must fix this)
void safeFunction() {
    std::cout << "\n--- Running Safe Function ---\n";

    // TODO 3: Replace the raw pointer below with your 'IntArrayWrapper' class.
    // Instead of: int* myNumbers = new int[10];
    // Use:        IntArrayWrapper wrapper(10);
    
    // --- DELETE THIS LINE AND REPLACE WITH YOUR CLASS ---
    int* myNumbers = new int[10]; 
    // ----------------------------------------------------

    // Simulate work
    // (If using wrapper, change this to: wrapper.setValue(0, 99); )
    myNumbers[0] = 99;

    // An error occurs! 
    // If RAII is working, the Destructor will kick in automatically here.
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
        std::cout << "  (Did you see '[RAII] Resource Released' above? If yes, good job!)\n";
    }

    return 0;
}
