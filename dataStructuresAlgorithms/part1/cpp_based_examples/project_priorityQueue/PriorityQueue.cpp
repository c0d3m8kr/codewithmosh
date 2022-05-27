//
// Created by R W on 2022-05-20.
//

#include "PriorityQueue.h"
#include <iostream>
#include <string>
#include <queue>
#include <vector>

PriorityQueue::PriorityQueue() {
}

PriorityQueue::PriorityQueue(int pqSize) {
    this->pqSize = pqSize;
    pqArray = new int[pqSize];
    for (int i = 0; i < pqSize; i++) {
        pqArray[i] = NULL;

    }
    currentPosition = &pqArray[0];
    count = 0;
}

PriorityQueue::~PriorityQueue() {
}

void PriorityQueue::insert(int value) {
    // --------> [1, 2, 4, 5, 0]
    // insert 3: [1, 2,  , 4, 5]
    // --------> [1, 2, 3, 4, 5]
    // currentPosition holds the value of the next available container
    int i;

    if (isFull()) {
        std::cout << "Insert out of bounds!" << std::endl;
    }
    else {
        for (i = count - 1; i >= 0; i--) {
            if (pqArray[i] > value)
                pqArray[i + 1] = pqArray[i];
            else
                break;
        }
        pqArray[i + 1] = value;
        count++;
    }
}

void PriorityQueue::printAll() {
    for (int i = 0; i < count; i++){
        std::cout << pqArray[i] << std::endl;
    }
}

void PriorityQueue::remove() {
    count--;
}

bool PriorityQueue::isFull() {
    return (count == (&pqArray[pqSize] - &pqArray[0]));
}
