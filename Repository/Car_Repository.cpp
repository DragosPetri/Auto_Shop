#include "Car_Repository.h"

Car_Repository::Car_Repository(const std::vector<Car> &storage) : storage(storage) {}

const std::vector<Car> &Car_Repository::getStorage() const {
    return storage;

}

void Car_Repository::setStorage(const std::vector<Car> &storage) {
    Car_Repository::storage = storage;


}

void Car_Repository::addToEnd(Car car) {
    storage.push_back(car);
}

bool Car_Repository::remove(Car car) {
    for(int i=0;i<storage.size();i++)
        if(getStorage()[i].getCarModel()==car.getCarModel() && getStorage()[i].getCarMake()==car.getCarMake())
        {
            storage.erase(storage.begin()+i);
            return true;
        }
    return false;
}





