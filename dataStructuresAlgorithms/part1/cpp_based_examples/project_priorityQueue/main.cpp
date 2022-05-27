/*
 * The project in this exercise will be to implement a priority queue (from scratch)
 * using an array. The next project will implement that same class
 * using a heap.
 */

#include <iostream>
#include <string>
#include <queue>
#include "PriorityQueue.h"

int main() {
    PriorityQueue myPQ(5);

    myPQ.insert(10);
    myPQ.insert(20);
    myPQ.insert(40);
    myPQ.insert(50);
    myPQ.insert(30);
    myPQ.printAll();

    std::cout << std::endl;

    myPQ.remove();
    myPQ.remove();
    myPQ.printAll();

    return 0;
}
