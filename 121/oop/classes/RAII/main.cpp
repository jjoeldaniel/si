#include <iostream>

class MyResource {
public:
  // Constructor acquires the resource, in this case dynamic memory
  MyResource(int end) {
    srand(time(0));                      // seed random number generator
    int secretNumber = rand() % end + 1; // generates a number between 1 and 100
    std::cout << "A secret number has been generated!" << std::endl;

    // Assign to `num` and print a message
    std::cout << "Resource is acquired!" << std::endl;
  }

  // Destructor releases the resource
  ~MyResource() {
    // Release the resource and print the secret number
    std::cout << "Resource is deleted" << std::endl;
  }

  int *getResource() {
    // Return the resource
    return 0;
  }

  // A function for the guessing game
  void guessNumber() {
    // Create a short game where a user inputs numbers
    // until they eventually guess the secret number!
  }

private:
  int *num;
};

int main() {
  // Resource is acquired when object is created
  MyResource res(10);

  std::cout << "Acquired Resource: " << *res.getResource() << std::endl;
  // res.guessNumber();

  // Resource is automatically released when object goes out of scope
  return 0;
}
