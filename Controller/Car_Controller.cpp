#include "Car_Controller.h"

Car_Controller::Car_Controller(const Car_Repository &carRepo) : car_repo(carRepo) {}

const Car_Repository &Car_Controller::getCarRepo() const {
    return car_repo;
}

void Car_Controller::setCarRepo(const Car_Repository &carRepo) {
    car_repo = carRepo;
}

void Car_Controller::add_car(Car car) {

}

bool Car_Controller::delete_car(Car car) {
    return false;
}

bool Car_Controller::update_car(Car old_car, Car new_car) {
    return false;
}

std::vector<Car> Car_Controller::search_car(std::string car_model, std::string car_make) {
    return std::vector<Car>();
}

std::vector<Car> Car_Controller::filter_car(int car_age, int car_km) {
    return std::vector<Car>();
}

std::vector<Car> Car_Controller::asc_sort() {
    return std::vector<Car>();
}
