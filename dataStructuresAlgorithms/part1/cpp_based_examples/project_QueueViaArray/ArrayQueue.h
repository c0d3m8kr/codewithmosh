//
// Created by R W on 2022-05-18.
//

#ifndef PROJECT_QUEUEVIAARRAY_ARRAYQUEUE_H
#define PROJECT_QUEUEVIAARRAY_ARRAYQUEUE_H

#include <string>

class ArrayQueue {
    public:
        ArrayQueue();
        ~ArrayQueue();
        ArrayQueue(int arraySize);
        void enqueue(int value);
        void dequeue();
        int peek();
        bool isEmpty();
        bool isFull();
        void printQueue();

    private:
        int arraySize;
        int* arrayPtr;      // pointer to array in memory
        int* frontIndex;
        int* rearIndex;
};


#endif //PROJECT_QUEUEVIAARRAY_ARRAYQUEUE_H
