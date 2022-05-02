#include <iostream>
#include <string>
#include "Array.h"

using namespace std;

Array::Array(int length)
{
    this->length = length;
    position = 0;
    items = new int[length];
}

Array::~Array(){}

void Array::free()
{
    delete[] items;
}

void Array::insert(int value)
{
    if (position < length)
    {
        items[position] = value;
        position++;
    }
    else
    {
        // we are over the array size and must expand
        int temp[length];
        for (int i = 0; i < length; i++)
        {
            temp[i] = items[i]; //copy
        }
        delete[] items;
        length++;
        items = new int[length];      // expand by 1
        for (int i = 0; i < length; i++)
        {
            items[i] = temp[i];
        }
        items[position] = value;
        position++;
    }
}

void Array::removeAt(int index)
{
    if (index > position)
    {
        cout << "Out of bounds index." << endl;
    }
    else
    {
        if (index == (length - 1))
        {
            int tempIndex[index];
            for (int i = 0; i < index; i++)
            {
                tempIndex[i] = items[i];
            }
            delete[] items;
            length = index;
            items = new int[length];
            for (int i = 0; i < length; i++)
            {
                items[i] = tempIndex[i];
            }
            position--;
        }
        else
        {
            int cp_start = index + 1;
            int cp_units = length - cp_start;
            int tempIndex[length-1];
            int temp;
            for (int i = 0; i < cp_units; i++)
            {
                items[index + i] = items[cp_start + i];
            }
            for (int i = 0; i < (length - 1); i++)
            {
                tempIndex[i] = items[i];
            }
            delete[] items;
            length--;
            items = new int[length];
            for (int i = 0; i < length; i++)
            {
                items[i] = tempIndex[i];
            }
            position--;
        }
    }
}

void Array::print() const
{
    for (int i = 0; i < position; i++)
    {
        cout << items[i] << endl;
    }
}

int Array::indexOf(int search)
{
    for (int i = 0; i < length; i++)
    {
        if (items[i] == search)
        {
            return i;
        }
    }
    return -1;
}