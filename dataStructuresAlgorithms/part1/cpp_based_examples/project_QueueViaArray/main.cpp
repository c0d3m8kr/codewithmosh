#include <iostream>
#include <queue>
#include <string>
#include "ArrayQueue.h"

int main() {
    // basically three ways to implement a queue:
    // 1. store items in array
    // 2. linked list
    // 3. stack
    // This exercise will implement a queue via an array:
    /*
     * create a class called : ArrayQueue
     * implement the following methods:
     * 1. enqueue (adds item to queue, ie the front)
     * 2. dequeue (removes item from front of que)
     * 3. peek
     * 4. isEmpty
     * 5. isFull
     */

    ArrayQueue myArrayQueue(3);
    std::cout << std::boolalpha << "IsEmpty? " << myArrayQueue.isEmpty()
              << std::endl;

    myArrayQueue.enqueue(10);
    myArrayQueue.enqueue(20);
    myArrayQueue.enqueue(30);
    std::cout << "The front index is: " << myArrayQueue.peek()
            << std::endl;
    myArrayQueue.printQueue();
    std::cout << std::boolalpha << "IsFull? " << myArrayQueue.isFull()
              << std::endl;

    std::cout << "Starting dequeuing..." << std::endl;
    myArrayQueue.dequeue();
    std::cout << "DEQ: The front index is: " << myArrayQueue.peek()
              << std::endl;
    myArrayQueue.dequeue();
    std::cout << "DEQ: The front index is: " << myArrayQueue.peek()
              << std::endl;
    myArrayQueue.dequeue();
    std::cout << "DEQ: The front index is: " << myArrayQueue.peek()
              << std::endl;
    std::cout << std::boolalpha << "IsFull? " << myArrayQueue.isFull()
              << std::endl;
    myArrayQueue.printQueue();
    myArrayQueue.dequeue();

    std::cout << "Starting queuing again..." << std::endl;
    myArrayQueue.enqueue(100);
    myArrayQueue.enqueue(200);
    myArrayQueue.enqueue(300);
    myArrayQueue.printQueue();
    std::cout << std::boolalpha << "IsFull? " << myArrayQueue.isFull()
              << std::endl;
    myArrayQueue.enqueue(500);

    return 0;
}
