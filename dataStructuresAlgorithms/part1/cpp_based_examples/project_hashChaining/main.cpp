/*
 * Dictionary (Hash Table) Based Drone Database
 * via a doubly-linked list in the hash table.
 */

#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include "NodeDrones.h"

int main() {
    std::map<int, NodeDrones*> chainMap;

    NodeDrones* start = NULL;
    NodeDrones* end = NULL;

    NodeDrones* drone01 = new NodeDrones("Top Gun", "Fixed Wing");
    start = drone01;

    chainMap.insert(std::pair<int, NodeDrones*>(10, drone01));

    NodeDrones* drone02 = new NodeDrones("Hummingbird", "Quadrotor");


    for (auto index : chainMap) {
        std::cout << index.first << " - " << index.second->getDroneName() << std::endl;
    }

    return 0;
}
