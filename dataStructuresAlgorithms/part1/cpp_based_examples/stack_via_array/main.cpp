#include <iostream>
#include "Stack.h"

int main() {
    Stack myStack(10);

    std::cout << std::boolalpha << "IsEmpty(): " << myStack.isEmpty() << std::endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    std::cout << "Peek 1: " << myStack.peek() << std::endl;
    std::cout << "Peek 2: " << myStack.peek() << std::endl;
    myStack.push(60);
    myStack.push(70);
    myStack.push(80);
    myStack.push(90);
    myStack.push(100);
    myStack.printAll();

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    std::cout << "Peek 1: " << myStack.peek() << std::endl;
    std::cout << "Peek 2: " << myStack.peek() << std::endl;
    myStack.pop();
    myStack.pop();
    std::cout << std::boolalpha << "IsEmpty(): " << myStack.isEmpty() << std::endl;
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.printAll();

    std::cout << "Peek 3: " << myStack.peek() << std::endl;
    std::cout << std::boolalpha << "IsEmpty(): " << myStack.isEmpty() << std::endl;

    myStack.pop();
    std::cout << "Program complete." << std::endl;

    return 0;
}
