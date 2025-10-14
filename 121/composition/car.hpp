#include <iostream>
#include <string>
#include <utility>

/**
 * @class Engine
 * @brief Represents the engine of a car.
 *
 * This class is fully implemented for you. It serves as the component
 * that will be part of the Car class.
 */
class Engine {
private:
  int horsepower_;
  bool isRunning_;

public:
  // Constructor to initialize horsepower and set the engine to off.
  Engine(int hp) {}

  // Starts the engine
  void start() {}

  // Stops the engine
  void stop() {}

  // Getter for the running state
  bool getIsRunning() const { return isRunning_; }

  // Getter for horsepower
  int getHorsepower() const { return horsepower_; }
};

/**
 * @class Car
 * @brief Represents a car that contains an Engine.
 *
 * This is the class you need to complete. A Car "has-a" Engine. This is a
 * key example of composition in OOP.
 */
class Car {
private:
  std::string make_;
  std::string model_;
  Engine engine_; // The Car HAS-A Engine object as a member variable

public:
  // TODO: PROBLEM 1 - Implement the Constructor
  // The Car's constructor needs to initialize its own members (`make_`,
  // `model_`) AND the `engine_` member. The best way to do this is with a
  // member initializer list. The `engine_` needs its horsepower value.
  Car(std::string make, std::string model, int engineHp) {
    // The body can be empty because the initializer list does all the work!
  }

  // TODO: PROBLEM 2 - Delegate to the Engine
  // This method should start the car by starting its engine.
  void startCar() {}

  // TODO: PROBLEM 3 - Delegate to the Engine
  // This method should stop the car by stopping its engine.
  void stopCar() {}

  // TODO: PROBLEM 4 - Use the Engine's State
  // A car can only drive if its engine is running.
  void drive() {
    // Check the state of the `engine_` component to decide what the car does.
  }

  // Displays information about the car and its engine
  void displayInfo() const {}
};
