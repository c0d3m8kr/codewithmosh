//
// Created by R W on 2022-05-25.
//

#ifndef PROJECT_HASHCHAINING_NODEDRONES_H
#define PROJECT_HASHCHAINING_NODEDRONES_H

#include <string>

class NodeDrones {
public:
    NodeDrones();
    NodeDrones(std::string droneName, std::string droneType);
    ~NodeDrones();
    void setDroneName(std::string droneName);
    void setDroneType(std::string droneType);
    std::string getDroneName();
    std::string getDroneType();
    NodeDrones* next;
    NodeDrones* previous;
private:
    std::string droneName;
    std::string droneType;
};


#endif //PROJECT_HASHCHAINING_NODEDRONES_H
