//
// Created by Tudor Esan on 03.05.2022.
//

#pragma once
#define CLIENT 1
#define MANAGER 0
#include "Car_Controller.h"
#include "Car.h"
#include "test.h"
#include <vector>


class Ui {
    Car_Controller controller;

public:
    void start();
    void showClientMenu();
    void showManagerMenu();
    void startClientApp();
    void startManagerApp();
    Car readCar();
    void printCar(Car car);
    void printCars(std::vector<Car> cars);
    void testAll();

    Ui(Car_Controller controller);
};


