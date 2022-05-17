#pragma once
#include <fstream>
#include "Car_Controller.h"

class CSVRepository {
private:
    Car_Controller control;
public:
    void uptofile();
    CSVRepository(Car_Controller controller): control(controller){}





};


