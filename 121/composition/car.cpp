#include "car.hpp" // Include the header file to get the class definition
#include <utility>   // For std::move

// TODO: PROBLEM 1 - Implement the Constructor
// Use a member initializer list to initialize all member variables.
// - `make_` should be initialized with the `make` parameter.
// - `model_` should be initialized with the `model` parameter.
// - The `engine_` member is an object and must be constructed. Its constructor
//   needs the `engineHp` value.
Car::Car(std::string make, std::string model, int engineHp) 
    : make_(std::move(make)), model_(std::move(model)), engine_(engineHp) {
    // The body of the constructor can be empty because the
    // member initializer list handles all the work.
}

// TODO: PROBLEM 2 - Delegate Actions to the Engine
// A Car starts by starting its engine. Call the appropriate method on the
// `engine_` member object to make this happen. This is called "delegation".
void Car::startCar() {
    std::cout << "Trying to start the " << make_ << " " << model_ << "..." << std::endl;
    engine_.start(); // Delegate the "start" action to the engine component.
}

// TODO: PROBLEM 3 - Delegate Actions to the Engine
// A Car stops by stopping its engine. Delegate this action to the `engine_`
// member object.
void Car::stopCar() {
    std::cout << "Trying to stop the " << make_ << " " << model_ << "..." << std::endl;
    engine_.stop(); // Delegate the "stop" action.
}

// TODO: PROBLEM 4 - Use the Component's State
// A car should only be able to drive if its engine is running.
// 1. Get the status of the engine by calling its `getIsRunning()` method.
// 2. Use an if-else statement to print the correct message based on whether
//    the engine is on or off.
void Car::drive() {
    if (engine_.getIsRunning()) {
        std::cout << "Driving the " << make_ << " " << model_ << "." << std::endl;
    } else {
        std::cout << "The car can't drive. The engine is off." << std::endl;
    }
}

// This method is provided for you. It uses the car's members and also
// asks its engine component for the horsepower info.
void Car::displayInfo() const {
    std::cout << "Car Info: " << make_ << " " << model_ << std::endl;
    std::cout << "Engine HP: " << engine_.getHorsepower() << std::endl;
}
