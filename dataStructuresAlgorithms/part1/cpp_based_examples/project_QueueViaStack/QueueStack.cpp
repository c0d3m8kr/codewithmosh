//
// Created by R W on 2022-05-20.
//

#include "QueueStack.h"
#include <string>
#include <stack>
#include <iostream>

MyQueue::MyQueue() {
    // create Queue object
    stackSize = 0;
}

int MyQueue::peek(){
    std::stack<int> temp = myStack;
    std::stack<int> swap;
    for (int i = 0; i < temp.size(); i++) {
        swap.push(temp.top());
        temp.pop();
    }
    return swap.top();
}

void MyQueue::enqueue(int value) {
    myStack.push(value);
    stackSize++;
}

void MyQueue::dequeue() {
    std::stack<int> temp;

    if (isEmpty()){
        std::cout << "The stack is Empty!" << std::endl;
    }
    else {
        int counter = myStack.size();
        for (int i = 0; i < counter; i++) {
            temp.push(myStack.top());
            myStack.pop();
        }
        temp.pop();     // effectively does dequeue
        counter = temp.size();
        for (int i = 0; i < counter; i++) {
            myStack.push(temp.top());
            temp.pop();
        }
        stackSize--;
    }
}

bool MyQueue::isEmpty() {
    return myStack.empty();
}

int MyQueue::size() {
    return stackSize;
}

void MyQueue::printQue() {
    std::stack<int> temp = myStack;
    std::stack<int> swap;

    int counter = temp.size();
    for (int i = 0; i < counter; i++) {
        swap.push(temp.top());
        temp.pop();
    }
    for (int i = 0; i < counter; i++) {
        std::cout << swap.top() << std::endl;
        swap.pop();
    }
}