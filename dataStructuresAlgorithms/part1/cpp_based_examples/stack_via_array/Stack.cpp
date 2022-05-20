//
// Created by R W on 2022-05-11.
//
#include <iostream>
#include "Stack.h"

Stack::Stack(int stackSize)
{
    lifoPosition = 0;
    this->stackSize = stackSize;
    stackArray = new int[stackSize];
    for (int i = 0; i < stackSize; i++){
        stackArray[i] = NULL;
    }
}

void Stack::push(int value)
{
    // check for end of array
    if (lifoPosition < stackSize) {
        // if not end of array, insert and increment position of LIFO
        stackArray[lifoPosition++] = value;
    }
    else {
        std::cout << "You've reached end of stack" << std::endl;
    }
}

void Stack::pop()
{
    if (lifoPosition > 0) {
        stackArray[--lifoPosition] = NULL;
    }
    else {
        std::cout << "You can't pop anymore!" << std::endl;
    }
}

int Stack::peek()
{
    if (lifoPosition == 0) {
        std::cout << "Nothing to peek at!" << std::endl;
        return NULL;
    }
    else
        return stackArray[lifoPosition-1];
}

bool Stack::isEmpty()
{
    return !lifoPosition;

    /*
    if (lifoPosition == 0)
        return true;
    else
        return false;
    */

    /*
    if (stackArray[0] == NULL)
        return true;
    else
        return false;
    */
}

void Stack::printAll()
{
    for (int i = 0; i < stackSize; i++){
        std::cout << *(stackArray+i) << std::endl;
    }
}