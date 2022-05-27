//
// Created by R W on 2022-05-25.
//

/*
 * Interview Question: Build a Hash Table [from scratch]
 * - ie, do not use map or unordered_map
 * - implement a HashTable class
 * with the following methods:
 * 1. put(k, v) or insert(k, v)
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

#ifndef PROJECT_BUILDHASHTABLE_HASHTABLE_H
#define PROJECT_BUILDHASHTABLE_HASHTABLE_H

#include <string>
#include <list>

class HashTable {
public:
    HashTable(int buckets);                 // constructor
    ~HashTable();                           // destructor
    void put(int key, std::string value);
    void printAll();
    void get(int key);
    void remove(int key);


private:
    int buckets;        // how many containers in the list
    std::list<std::string>* hashArray;
    int hashFunction(int key);
};

#endif //PROJECT_BUILDHASHTABLE_HASHTABLE_H
