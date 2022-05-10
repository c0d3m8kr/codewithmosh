#include <iostream>
#include <stack>
#include <string>

int main() {
    std::stack<int> myStack;
    std::stack<char> myStack2;
    std::string str = "abcd";
    const char* myNewString = "abcdef";

    // implement using string str and stack
    // string str utilizes the string class to get length() and at() location
    // strips character from string and pushes onto stack
    std::cout << "Using String str and Stack: " << str << std::endl;
    for (int i = 0; i < str.length(); i++){
        myStack2.push(str.at(i));
    }
    std::cout << "Using String str and Stack: ";
    while (!myStack2.empty()){
        std::cout << myStack2.top();
        myStack2.pop();
    }
    std::cout << std::endl;


    // implement using stack and char* string
    // uses strlen to get str length and extracts
    // character by character via array index and pushes onto stack
    std::cout << "Using STACK: " << myNewString << std::endl;
    int sizeOfMyString = strlen(myNewString);
    for (int i = 0; i < sizeOfMyString; i++){
        myStack.push(myNewString[i]);
    }
    std::cout << "Using STACK: ";
    while (!myStack.empty()){
        std::cout << char(myStack.top());
        myStack.pop();
    }
    std::cout << std::endl;

    std::cout << strlen(myNewString) << std::endl;

    std::cout << myNewString << std::endl;
    for (int i = (strlen(myNewString) - 1); i >= 0; i--){
        std::cout << myNewString[i];
    }
    std::cout << std::endl;

    std::cout << str.size() << std::endl;
    std::cout << str << std::endl;
    for (int i = (str.size() - 1); i >= 0; i--){
        std::cout << str.at(i);
        str.pop_back();
    }
    std::cout << std::endl << str.size() << std::endl;
    std::cout << std::endl;

    std::cout << &str << std::endl;
    std::cout << *(&str) << std::endl;

    myStack.push(21);
    myStack.push(50);
    myStack.push(30);

    std::cout << "The size of the stack is: " << myStack.size() << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << myStack.top() << std::endl;
        myStack.pop();
    }

    std::cout << "Hello Ronnie Wong!" << std::endl;

    // std::cout << "Hello, World!" << std::endl;
    return 0;
}
