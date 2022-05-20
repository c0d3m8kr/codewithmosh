#include <iostream>
#include <string>
#include <stack>
#include "QueueStack.h"
// stack is Last In, First Out...new items get appended to front, items popped from the back
// queue is First In, First Out...new items get appended to back, item popped at the front

int main() {
    MyQueue myQue;

    myQue.enqueue(10);
    myQue.enqueue(20);
    myQue.enqueue(30);
    myQue.enqueue(40);
    myQue.enqueue(50);

    std::cout << "The queue size is: " << myQue.size() << std::endl;
    myQue.printQue();

    myQue.dequeue();
    myQue.dequeue();
    std::cout << "The queue size is: " << myQue.size() << std::endl;
    myQue.printQue();

    myQue.dequeue();
    myQue.dequeue();
    myQue.dequeue();
    myQue.dequeue();

    return 0;
}
