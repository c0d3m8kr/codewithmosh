//
// Created by R W on 2022-05-25.
//

#include "NodeDrones.h"
#include <string>
#include <iostream>

NodeDrones::NodeDrones() {
    next = NULL;
    previous = NULL;
}

NodeDrones::NodeDrones(std::string droneName, std::string droneType) {
    this->droneName = droneName;
    this->droneType = droneType;
    next = NULL;
    previous = NULL;
}

NodeDrones::~NodeDrones() {
}

void NodeDrones::setDroneName(std::string droneName) {
    this->droneName = droneName;
}

void NodeDrones::setDroneType(std::string droneType) {
    this->droneType = droneType;
}

std::string NodeDrones::getDroneName() {
    return droneName;
}

std::string NodeDrones::getDroneType() {
    return droneType;
}