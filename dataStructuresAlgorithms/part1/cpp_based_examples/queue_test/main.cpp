#include <iostream>
#include <queue>

int main() {

    std::queue<int>* myQue1 = new std::queue<int>;          // dynamically create queue!
    std::queue<int> myQue2;                                 // statically create queue!

    myQue1->push(10);
    myQue1->push(1000);

    myQue2.push(50);
    myQue2.push(800);

    std::cout << "myQue1 Front: " << myQue1->front() << std::endl;
    std::cout << "myQue1 Back: " << myQue1->back() << std::endl;

    std::cout << "myQue2 Front: " << myQue2.front() << std::endl;
    std::cout << "myQue2 Back: " << myQue2.back() << std::endl;

    delete myQue1;

    return 0;
}
