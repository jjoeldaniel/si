#include <iostream>
#include "car.hpp"

int main() {
    std::cout << "======= Exercise: OOP Composition =======" << std::endl;

    // Create a Car object. This also implicitly creates an Engine object inside it.
    std::cout << "\n--- Creating a Car ---" << std::endl;
    Car myCar("Honda", "Civic", 158);
    myCar.displayInfo();

    // --- Test the Car's functionality ---
    std::cout << "\n--- Running Tests ---" << std::endl;

    // 1. Try to drive with the engine off
    myCar.drive();

    // 2. Start the car and then try to drive
    myCar.startCar();
    myCar.drive();

    // 3. Stop the car
    myCar.stopCar();

    // 4. Try to drive again with the engine off
    myCar.drive();

    std::cout << "\n======= Exercise Complete =======" << std::endl;
    return 0;
}

/*
------------- EXPECTED OUTPUT -------------

======= Exercise: OOP Composition =======

--- Creating a Car ---
Car Info: Honda Civic
Engine HP: 158

--- Running Tests ---
The car can't drive. The engine is off.
Trying to start the Honda Civic...
Engine starts. Vroom vroom!
Driving the Honda Civic.
Trying to stop the Honda Civic...
Engine stops.
The car can't drive. The engine is off.

======= Exercise Complete =======

*/
