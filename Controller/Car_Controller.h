#pragma once
#include "Car_Repository.h"
#include <vector>

class Car_Controller {
private:
//    Car_Repository car_repo;
    std::shared_ptr<Car_Repository> car_repo = std::make_shared<Car_Repository>();

public:
    Car_Controller(std::shared_ptr<Car_Repository> carRepo);
    std::shared_ptr<Car_Repository> getCarRepo() const;
    Car_Controller();
    void setCarRepo(std::shared_ptr<Car_Repository> carRepo);
    void add_car(Car car);
    bool delete_car(Car car);
    bool update_car(Car old_car, Car new_car);
    std::vector<Car> search_car(std::string car_model, std::string car_make);
    std::vector<Car> filter_car(int car_km);
    std::vector<Car> asc_sort();
};
