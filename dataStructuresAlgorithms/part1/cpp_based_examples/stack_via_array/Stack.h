//
// Created by R W on 2022-05-11.
//
// use regular integer array, not array list!
// ie, use int[] b/c mosh wants us to handle the
// case where the array gets full!

#ifndef STACK_VIA_ARRAY_STACK_H
#define STACK_VIA_ARRAY_STACK_H


class Stack {
public:
    Stack(int stackSize);
    void push(int value);
    void pop();
    int peek();
    bool isEmpty();
    void printAll();

private:
    int lifoPosition;       // ie, count, the position in LIFO
    int stackSize;
    int* stackArray;
};


#endif //STACK_VIA_ARRAY_STACK_H
