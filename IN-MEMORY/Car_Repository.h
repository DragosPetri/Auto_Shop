#pragma once
#include "Car.h"
#include "CRUD-Repository.h"
#include <vector>

class Car_Repository : CrudRepository<Car> {
private:
    std::vector<Car> storage;

public:
    Car_Repository();
    Car_Repository(const std::vector<Car> &storage);
    void addToEnd(Car car);
    bool remove(Car car);
    const std::vector<Car> &getStorage() const;
    int findId();
    void setStorage(const std::vector<Car> &storage);
};


