#pragma once
#include <fstream>
#include "Car_Controller.h"


class csv {
private:
    Car_Controller control;
public:
    void uptofile();
    csv(Car_Controller controller): control(controller){}





};


