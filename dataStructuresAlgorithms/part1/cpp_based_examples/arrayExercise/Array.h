#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <array>

using namespace std;

class Array
{
    public:
        Array(int length);          // constructor
        ~Array();
        void free();
        void insert(int value);
        void removeAt(int index);
        void print() const;
        int indexOf(int search);
        //void insert();
        //void removeAt(int index);
        //int indexOf(int item) const;
    private:
        int length;         // length of array
        int* items;         // pointer to instantiated array at runtime
        int position;       // position tracker of current position, length -1
};

#endif