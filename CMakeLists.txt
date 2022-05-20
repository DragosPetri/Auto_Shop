cmake_minimum_required(VERSION 3.21)
project(Auto_Shop)

set(CMAKE_CXX_STANDARD 14)

include_directories(CONTROLLER)
include_directories(DOMAIN)
include_directories(IN-MEMORY)
include_directories(UI)
include_directories(CSV-FILE-REPOSITORY)
include_directories(REPOSITORY)

add_executable(Auto_Shop
        UI/Ui.cpp
        UI/Ui.h
        CONTROLLER/Car_Controller.cpp
        CONTROLLER/Car_Controller.h
        DOMAIN/Car.cpp
        DOMAIN/Car.h
        IN-MEMORY/Car_Repository.cpp
        IN-MEMORY/Car_Repository.h
        App.cpp
        UI/test.cppT
        UI/test.h
        CSV-FILE-REPOSITORY/CSVRepository.cpp
        CSV-FILE-REPOSITORY/CSVRepository.h
        REPOSITORY/CRUD-Repository.h
        )
