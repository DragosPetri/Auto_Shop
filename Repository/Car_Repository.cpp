#include "Car_Repository.h"

Car_Repository::Car_Repository(const std::vector<Car> &storage) : storage(storage) {}

const std::vector<Car> &Car_Repository::getStorage() const {
    return storage;
}

void Car_Repository::setStorage(const std::vector<Car> &storage) {
    Car_Repository::storage = storage;


}
