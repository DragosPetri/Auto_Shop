#include "csv.h"


void csv::uptofile() {
    std::ofstream f("carlist.txt");
    for(int i=0;i<control.getCarRepo()->getStorage().size();i++)
    {
        f<<control.getCarRepo()->getStorage()[i].getId()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getCarModel()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getCarMake()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getRegistrationYear()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getKilometrage()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getPrice()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getChargeTimeMinutes()<<" ";
        f<<control.getCarRepo()->getStorage()[i].getRange()<<" ";
    }
    f.close();
}
