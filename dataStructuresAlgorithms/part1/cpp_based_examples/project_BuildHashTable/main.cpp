/*
 * Interview Question: Build a Hash Table [from scratch]
 * - ie, do not use map or unordered_map
 * - implement a HashTable class
 * with the following methods:
 * 1. put(k, v)
 * 2. get(k): v     // returns v, value
 * 3. remove(k)     // removes corresponding value
 * k = integers, v = strings
 * Collisions: use the chaining strategy.
 * LinkedList<Entry>[] or LinkedList<keyValuePair>[]
 * [ LL, LL, LL, LL ] - every element in array is a linked list!
 * ** LL is added on demand, via new memory allocation
 * otherwise, each LL is NULL
 * KeyValuePair (private class)
 */

#include <iostream>
#include <string>
#include "HashTable.h"
#include <list>

int main() {

    HashTable droneNetwork(10);

    droneNetwork.put(12345, "Fly Me to the Moon");
    droneNetwork.put(123, "Are we going to Mars");
    droneNetwork.put(123, "Mars vs Pluto");
    droneNetwork.put(88122, "Wow is this ever far");
    droneNetwork.put(12345, "Fly me where Again");
    droneNetwork.put(12345, "I don't want to be here");
    droneNetwork.put(12345, "Lightspeed now!");

    std::cout << "Printing all added entries: " << std::endl;
    droneNetwork.printAll();

    std::cout << "Getting one key: " << std::endl;
    droneNetwork.get(12345);

    std::cout << "Removing..." << std::endl;
    droneNetwork.remove(12345);

    std::cout << "Printing all added entries: " << std::endl;
    droneNetwork.printAll();

    return 0;
}
