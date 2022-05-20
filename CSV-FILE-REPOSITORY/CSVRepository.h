#pragma once
#include <fstream>
#include "CRUD-Repository.h"
#include "Car.h"

class CSVRepository : CrudRepository<Car>{
private:
    string file;
    int id;
public:
    CSVRepository();
    void addToEnd(Car car);
    bool remove(Car car);
    int findId();
    const vector<Car> &getStorage() const;
    void setStorage(const vector<Car> &elems);
};


