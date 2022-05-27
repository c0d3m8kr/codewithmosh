//
// Created by R W on 2022-05-20.
//

#ifndef PROJECT_PRIORITYQUEUE_PRIORITYQUEUE_H
#define PROJECT_PRIORITYQUEUE_PRIORITYQUEUE_H

#include <string>
#include <queue>

class PriorityQueue {
    public:
        PriorityQueue();
        PriorityQueue(int pqSize);
        ~PriorityQueue();
        void insert(int value);
        void remove();
        void printAll();

    private:
        int* pqArray;
        int pqSize;
        int* currentPosition;
        int count;

        bool isFull();
};


#endif //PROJECT_PRIORITYQUEUE_PRIORITYQUEUE_H
