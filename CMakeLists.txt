cmake_minimum_required(VERSION 3.10)

project(Transport)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(FoodKitChecker
	Task1.cpp
	Factory.cpp Factory.h
	Transport.cpp Transport.h
)