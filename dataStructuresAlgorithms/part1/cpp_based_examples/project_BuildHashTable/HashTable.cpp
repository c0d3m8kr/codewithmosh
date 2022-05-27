//
// Created by R W on 2022-05-25.
//

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

#include "HashTable.h"
#include <string>
#include <iostream>
#include <list>

HashTable::HashTable(int buckets) {
    this->buckets = buckets;
    hashArray = new std::list<std::string>[buckets];
}

HashTable::~HashTable() {
}

int HashTable::hashFunction(int key) {
    return key % buckets;
}

void HashTable::put(int key, std::string value) {
    int index = hashFunction(key);
    hashArray[index].push_back(value);
}

void HashTable::printAll() {
    for (int i = 0; i < buckets; i++) {
        // Method 1:
        /*
        for (auto x : hashArray[i]) {
            std::cout << " --> " << x;
        }
        */

        // Method 2:
        std::cout << "[" << i << "] ";
        for (auto it = hashArray[i].begin(); it != hashArray[i].end(); it++){
            std::cout << " --> " << *it;
        }
        std::cout << std::endl;
    }
}

void HashTable::get(int key) {
    int index = hashFunction(key);
    std::cout << "[" << index << "] ";
    for (auto it = hashArray[index].begin(); it != hashArray[index].end(); it++) {
        std::cout << " --> " << *it;
    }
}

void HashTable::remove(int key) {
    int index = hashFunction(key);

    while (!hashArray[index].empty()) {
        hashArray[index].pop_back();
    }
}