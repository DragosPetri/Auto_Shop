#pragma once
#include "Car.h"
#include <vector>

class Car_Repository {
private:
    std::vector<Car> storage;

public:
    Car_Repository(const std::vector<Car> &storage);

    const std::vector<Car> &getStorage() const;

    void setStorage(const std::vector<Car> &storage);
};


