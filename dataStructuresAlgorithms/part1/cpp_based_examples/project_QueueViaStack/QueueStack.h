//
// Created by R W on 2022-05-20.
//

#ifndef PROJECT_QUEUEVIASTACK_QUEUESTACK_H
#define PROJECT_QUEUEVIASTACK_QUEUESTACK_H

#include <stack>
#include <iostream>
#include <string>

class MyQueue {
    public:
        MyQueue();
        int peek();
        void enqueue(int value);
        int size();
        void dequeue();
        bool isEmpty();
        void printQue();

    private:
        std::stack<int> myStack;
        int stackSize;
};


#endif //PROJECT_QUEUEVIASTACK_QUEUESTACK_H
