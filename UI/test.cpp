#include "Car_Controller.h"
#include <cassert>



void testAdd() {

    Car_Controller repo;
    auto testrepo = Car_Controller(repo);
    auto c1=Car("Tesla Model S", "Tesla", "22.02.2022", 700, 250, 22, 11);
    auto c2=Car("Tesla Model 3", "Tesla", "21.02.2022", 150, 250, 22, 11);
    auto c3=Car("Tesla Model Y", "Tesla", "20.02.2022", 1000, 250, 22, 11);
    testrepo.add_car(c1);
    testrepo.add_car(c2);
    testrepo.add_car(c3);
    assert(testrepo.getCarRepo()->getStorage().size()==3);


}


void testdelete()
{

    Car_Controller repo;
    auto testrepo = Car_Controller(repo);
    auto c1=Car("Tesla Model S", "Tesla", "22.02.2022", 700, 250, 22, 11);
    auto c2=Car("Tesla Model 3", "Tesla", "21.02.2022", 150, 250, 22, 11);
    auto c3=Car("Tesla Model Y", "Tesla", "20.02.2022", 1000, 250, 22, 11);
    testrepo.add_car(c1);
    testrepo.add_car(c2);
    testrepo.add_car(c3);
    testrepo.delete_car(c1);
    testrepo.delete_car(c2);
    testrepo.delete_car(c3);
    assert(testrepo.getCarRepo()->getStorage().size()==0);


}

void testfilter()
{
    Car_Controller repo;
    auto testrepo = Car_Controller(repo);
    auto c1=Car("Tesla Model S", "Tesla", "22.02.2022", 700, 250, 22, 11);
    auto c2=Car("Tesla Model 3", "Tesla", "21.02.2022", 150, 250, 22, 11);
    auto c3=Car("Tesla Model Y", "Tesla", "20.02.2022", 1000, 250, 22, 11);
    testrepo.add_car(c1);
    testrepo.add_car(c2);
    testrepo.add_car(c3);
    testrepo.filter_car(702);
    assert(testrepo.filter_car(702).size()==2);



}



