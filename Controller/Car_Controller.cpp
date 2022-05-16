#include "Car_Controller.h"
#include <bits/stdc++.h>
#include <utility>

Car_Controller::Car_Controller(std::shared_ptr<Car_Repository> &carRepo) : car_repo(carRepo) {}

std::shared_ptr<Car_Repository> Car_Controller::getCarRepo() const {
    return car_repo;
}

void Car_Controller::setCarRepo(std::shared_ptr<Car_Repository> carRepo) {
    car_repo = carRepo;
}

void Car_Controller::add_car(Car car) {
    car_repo->addToEnd(car);
    setCarRepo(car_repo);
}

bool Car_Controller::delete_car(Car car) {
    if(car_repo->remove(car))
        return true;
    return false;

}

bool Car_Controller::update_car(Car old_car, Car new_car) {
    for(int i=0;i<car_repo->getStorage().size();i++)
        if(car_repo->getStorage()[i].getCarModel()==old_car.getCarModel() && car_repo->getStorage()[i].getCarMake()==old_car.getCarMake())
        {
            old_car.setCarModel(new_car.getCarModel());
            old_car.setCarMake(new_car.getCarModel());
            old_car.setRegistrationYear(new_car.getRegistrationYear());
            old_car.setPrice(new_car.getPrice());
            old_car.setKilometrage(new_car.getKilometrage());
            old_car.setRange(new_car.getRange());
            return true;
        }
    return false;
}

std::vector<Car> Car_Controller::search_car(std::string car_model, std::string car_make) {
    std::vector<Car> cars;
    for(int i=0;i<car_repo->getStorage().size();i++)
        if(car_repo->getStorage()[i].getCarModel()==car_model && car_repo->getStorage()[i].getCarMake()==car_make)
            cars.push_back(car_repo->getStorage()[i]);
    return cars;
}

std::vector<Car> Car_Controller::filter_car(int car_km) {
    std::vector<Car> cars;
    for(int i=0;i<car_repo->getStorage().size();i++)
        if(car_repo->getStorage()[i].getKilometrage()<=car_km)
            cars.push_back(car_repo->getStorage()[i]);
    return cars;
}

static bool bypreis(const Car& c1, const Car& c2 ) { return c1.getPrice() < c2.getPrice(); }

std::vector<Car> Car_Controller::asc_sort() {
    std::vector<Car> cars;
    for(int i=0;i<car_repo->getStorage().size();i++)
    {
        cars.push_back(car_repo->getStorage()[i]);
    }
    sort(cars.begin(), cars.end(), bypreis);
    return cars;
}

void Car_Controller::addToFavorites(Car car) {
    favorites.push_back(car);

}

void Car_Controller::showFavorites() {
    for (auto &car: favorites)
        printCar(car);

}

void Car_Controller::printCar(Car car) {
    std::cout << car.getId() << car.getCarModel() << " " << car.getCarMake() << " " << car.getRegistrationYear() << " " << car.getPrice() << " " << car.getChargeTimeMinutes() << " " <<car.getKilometrage() << " " <<car.getRange() << " " <<std::endl;
}

Car_Controller::Car_Controller() {

}


