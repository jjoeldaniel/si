#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

/**
 * @class Engine
 * @brief Represents the engine component of a car. This class is complete.
 */
class Engine {
private:
    int horsepower_;
    bool isRunning_;

public:
    // Constructor
    Engine(int hp) : horsepower_(hp), isRunning_(false) {}

    // Starts the engine
    void start() {
        if (!isRunning_) {
            std::cout << "Engine starts. Vroom vroom!" << std::endl;
            isRunning_ = true;
        }
    }

    // Stops the engine
    void stop() {
        if (isRunning_) {
            std::cout << "Engine stops." << std::endl;
            isRunning_ = false;
        }
    }

    // Getters
    bool getIsRunning() const { return isRunning_; }
    int getHorsepower() const { return horsepower_; }
};


/**
 * @class Car
 * @brief Represents a car that HAS-A Engine (composition).
 * Your task is to implement the methods of this class in Car.cpp.
 */
class Car {
private:
    std::string make_;
    std::string model_;
    Engine engine_; // The Car contains an Engine object

public:
    // Constructor declaration
    Car(std::string make, std::string model, int engineHp);

    // Method declarations for actions the car can perform
    void startCar();
    void stopCar();
    void drive();
    void displayInfo() const;
};

#endif // CAR_HPP
