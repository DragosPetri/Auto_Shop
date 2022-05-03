#include <Car_Controller.h>
#include <Car_Repository.h>
#include <Ui.h>
#include <vector>
#include <Car.h>
int main()
{
    auto cars = std::vector<Car>{
        Car("Tesla Model S", "Tesla", "22.02.2022", 700, 250, 22, 11),
        Car("Tesla Model 3", "Tesla", "21.02.2022", 150, 250, 22, 11),
        Car("Tesla Model Y", "Tesla", "20.02.2022", 1000, 250, 22, 11),
        Car("Prius", "Toyota", "23.02.2022", 1223, 250, 22, 11),
        Car("Dacia Spring", "Dacia", "24.02.2022", 1, 1, 0, 100),
        Car("E-Tron", "Audi", "25.02.2022", 150, 250, 22, 11)};

    std::shared_ptr<Car_Repository> repo1 = std::make_shared<Car_Repository>(cars);
    auto controller = Car_Controller(repo1);
    auto ui = Ui(controller);
    ui.start();
    return 0;
}