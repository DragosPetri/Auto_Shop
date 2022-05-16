cmake_minimum_required(VERSION 3.21)
project(Auto_Shop)

set(CMAKE_CXX_STANDARD 14)

include_directories(Controller)
include_directories(Domain)
include_directories(Repository)
include_directories(UI)

add_executable(Auto_Shop
        UI/Ui.cpp
        UI/Ui.h
        Controller/Car_Controller.cpp
        Controller/Car_Controller.h
        Domain/Car.cpp
        Domain/Car.h
        Repository/Car_Repository.cpp
        Repository/Car_Repository.h
        App.cpp
        UI/test.cpp
        UI/test.h
        RepoInFile/csv.cpp
        RepoInFile/csv.h
        )
