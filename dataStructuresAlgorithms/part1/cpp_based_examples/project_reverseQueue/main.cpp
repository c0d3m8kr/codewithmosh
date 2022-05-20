/*
 * Summary: reverse queue
 * if the queue holds [10, 20, 30]
 * after reverse_queue:
 * [30, 20, 10]
 */

#include <iostream>
#include <queue>
#include <deque>
#include <string>
#include <stack>

int main() {
    std::queue<int> myQue;
    std::queue<int> myQueReverse;
    std::deque<int> myDeque;
    std::stack<int> myStack;

    myQue.push(5);
    myQue.push(10);
    myQue.push(15);
    myQue.emplace(20);

    int size = myQue.size();
    int myReverseArray[size];
    std::cout << "[";
    for (int i = size - 1; i >= 0; i--){
        myReverseArray[i] = myQue.front();
        std::cout << myQue.front();
        if (i != 0)
            std::cout << ", ";
        myQue.pop();
    }
    std::cout << "]" << std::endl;

    std::cout << "[";
    for (int i = 0; i < size; i++){
        std::cout << myReverseArray[i];
        if (i < size - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    myQue.push(5);
    myQue.push(10);
    myQue.push(15);
    myQue.emplace(20);

    for (int i = 0; i < size; i++){
        myStack.push(myQue.front());
        myQue.pop();
    }

    for (int i = 0; i < size; i++){
        std::cout << myStack.top() << std::endl;
        myStack.pop();
    }

    std::cout << std::boolalpha << "myQue is empty: " << myQue.empty() << std::endl;
    std::cout << std::boolalpha << "myStack is empty: " << myStack.empty() << std::endl;

    return 0;
}
