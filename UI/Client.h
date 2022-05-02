#pragma once
#include <vector>
#include "User.h"
#include "Car.h"

class Client : User {
private:
    std::vector<Car> favorites;

public:
    void setFavorites(const std::vector<Car> &favorites);

    const std::vector<Car> &getFavorites() const;

    void showMenu();
};

