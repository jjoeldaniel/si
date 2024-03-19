# Book Class Testing Suite

This repository contains a simple C++ testing suite for the `Book` class. The `Book` class represents a book in a library and includes functionalities such as constructors, getters, setters, and display method.

## Instructions

1. Download the project files:

   ```bash
   (mkdir diy_class && cd diy_class && curl https://raw.githubusercontent.com/jjoeldaniel/si/main/121/diy_class/install.sh | bash)
   ```

2. Navigate to the new directory:

   ```bash
   cd diy_class
   ```

3. Run the testing suite script:

> Note: You will only have to run `chmod +x run.sh` once!

```bash
chmod +x run.sh
./run.sh
```

This script will compile the `Book.cpp` file along with the test file `main.cpp` using either `clang++` or `g++` (depending on availability). If compilation is successful, it will run the testing suite to verify the functionality of the `Book` class.

4. Review the test results:

   After running the script, you will see the output of the testing suite, which includes information about the book objects created and their attributes.
