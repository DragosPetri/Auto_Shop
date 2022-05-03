//
// Created by Tudor Esan on 03.05.2022.
//

#ifndef AUTO_SHOP_UI_H
#define AUTO_SHOP_UI_H
#define CLIENT 1
#define MANAGER 0
#include "Car_Controller.h"
#include "Car.h"
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

    Ui(Car_Controller controller);
};


#endif //AUTO_SHOP_UI_H
