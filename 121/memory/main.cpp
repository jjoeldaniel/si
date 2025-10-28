#include <iostream>
#include <string>

/**
 * @class Student
 * @brief A simple class to represent a student.
 *
 * This class demonstrates object creation and destruction with messages
 * to help visualize when constructors and destructors are called.
 */
class Student {
public:
    // Public member variables for simplicity
    std::string name;
    int id;

    /**
     * @brief Constructor for the Student class.
     * @param n The student's name.
     * @param i The student's ID.
     */
    Student(std::string n, int i) : name(n), id(i) {
        std::cout << "  CONSTRUCTOR: Student '" << name << "' created." << std::endl;
    }

    /**
     * @brief Destructor for the Student class.
     *
     * This is called automatically when a stack object goes out of scope
     * or when a heap object is manually 'delete'd.
     */
    ~Student() {
        std::cout << "  DESTRUCTOR: Student '" << name << "' destroyed." << std::endl;
    }

    /**
     * @brief Prints the student's information.
     */
    void printInfo() {
        std::cout << "  - Name: " << name << ", ID: " << id << std::endl;
    }
};


// --- Main Function ---
int main() {
    std::cout << "--- Program Start ---" << std::endl;

    // --- 1. STACK Allocation ---
    // This object is created on the STACK.
    // Its memory is managed AUTOMATICALLY.
    // It will be destroyed when 'main' (its scope) ends.
    std::cout << "\nCreating student1 on the STACK..." << std::endl;
    Student student1("Alice (Stack)", 101);
    student1.printInfo(); // Access members with . (dot)

    // --- 2. HEAP Allocation ---
    // This object is created on the HEAP using the 'new' keyword.
    // 'new' returns a POINTER (an address) to the object.
    // Its memory must be managed MANUALLY.
    std::cout << "\nCreating student2 on the HEAP..." << std::endl;
    Student* student2_ptr = new Student("Bob (Heap)", 102);
    student2_ptr->printInfo(); // Access members with -> (arrow)

    
    std::cout << "\n--- Student Exercise ---" << std::endl;

    // TODO 1:
    // Create a new Student object on the HEAP.
    // - The pointer variable should be named 'student3_ptr'.
    // - Give the student the name "Charlie (Heap)" and ID 103.
    //
    // Write your code here:
    // 

    // TODO 2:
    // Call the 'printInfo()' method for the student you just created.
    // Remember to use the correct operator for pointers!
    //
    // Write your code here:
    //


    std::cout << "\n--- Clean-up Time ---" << std::endl;
    
    // We must MANUALLY delete objects created on the heap.
    // This calls the object's destructor.
    std::cout << "Manually deleting student2..." << std::endl;
    delete student2_ptr;
    student2_ptr = nullptr; // Good practice to prevent dangling pointers

    // TODO 3:
    // Manually delete the 'student3' object you created on the heap.
    //
    // Write your code here:
    //


    std::cout << "\n--- Main function is ending... ---" << std::endl;

    return 0;
}
