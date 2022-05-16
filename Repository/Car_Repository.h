#pragma once
#include "Car.h"
#include <vector>

class Car_Repository {
private:
    std::vector<Car> storage;

public:
    Car_Repository(const std::vector<Car> &storage);
    void addToEnd(Car car);
    bool remove(Car car);
    const std::vector<Car> &getStorage() const;
    int findId(Car car);
    void setStorage(const std::vector<Car> &storage);

    Car_Repository();
};


