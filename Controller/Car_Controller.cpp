#include "Car_Controller.h"

Car_Controller::Car_Controller(const Car_Repository &carRepo) : car_repo(carRepo) {}

const Car_Repository &Car_Controller::getCarRepo() const {
    return car_repo;
}

void Car_Controller::setCarRepo(const Car_Repository &carRepo) {
    car_repo = carRepo;
}

void Car_Controller::add_car(Car car) {
    car_repo.addToEnd(car);
}

bool Car_Controller::delete_car(Car car) {
    if(car_repo.remove(car))
        return true;
    return false;

}

bool Car_Controller::update_car(Car old_car, Car new_car) {
    return false;
}

std::vector<Car> Car_Controller::search_car(std::string car_model, std::string car_make) {
    std::vector<Car> cars;
    for(int i=0;i<car_repo.getStorage().size();i++)
        if(car_repo.getStorage()[i].getCarModel()==car_model && car_repo.getStorage()[i].getCarMake()==car_make)
            cars.push_back(car_repo.getStorage()[i]);
    return cars;
}

std::vector<Car> Car_Controller::filter_car(int car_age, int car_km) {
    return std::vector<Car>();
}

std::vector<Car> Car_Controller::asc_sort() {
    return std::vector<Car>();
}
