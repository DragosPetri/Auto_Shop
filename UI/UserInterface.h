#pragma once
#include "User.h"
#include "Car_Controller.h"

class UserInterface {
private:
    User user;
    Car_Controller auto_ctrl;

public:
    UserInterface(const User &user, const Car_Controller &autoCtrl);

    void simple_init();
};
