//
// Created by R W on 2022-05-18.
//

#include "ArrayQueue.h"
#include <string>
#include <iostream>

ArrayQueue::ArrayQueue() {
}

ArrayQueue::~ArrayQueue() {
}

ArrayQueue::ArrayQueue(int arraySize) {
    this->arraySize = arraySize;
    arrayPtr = new int[arraySize];
    for (int i = 0; i < arraySize; i++) {
        *(arrayPtr + i) = NULL;
    }
    frontIndex = &arrayPtr[0];
    rearIndex = &arrayPtr[0];
}

void ArrayQueue::enqueue(int value) {
    if (!isFull()){
        if (isEmpty()) {
            // reset the pointers to beginning
            frontIndex = &arrayPtr[0];
            rearIndex = &arrayPtr[0];
        }
        // insert element value
        *rearIndex = value;
        rearIndex = rearIndex + 1;  // increment next arrayPtr position
    }
    else {
        std::cout << "The queue is full! No more can be added! "
                << std::endl;
    }
}

void ArrayQueue::dequeue() {
    if (!isEmpty()) {
        frontIndex = (frontIndex + 1) % arraySize;
    }
    else {
        std::cout << "Cannot dequeue anymore!" << std::endl;
    }
}

int ArrayQueue::peek() {
    if (!isEmpty())
        return *frontIndex;
    else
        return 0;
}

bool ArrayQueue::isEmpty() {
    if (frontIndex == rearIndex)
        return true;
    else
        return false;
}

bool ArrayQueue::isFull() {
    if (rearIndex > &arrayPtr[arraySize - 1] && frontIndex != rearIndex)
        return true;
    else
        return false;
}

void ArrayQueue::printQueue() {
    for (int* index = frontIndex; index != rearIndex; index++) {
        std::cout << *index << std::endl;
    }
}