#include "Client.h"

const std::vector<Car> &Client::getFavorites() const {
    return favorites;
}

void Client::setFavorites(const std::vector<Car> &favorites) {
    Client::favorites = favorites;
}

void Client::showMenu() {
    User::showMenu();
}
