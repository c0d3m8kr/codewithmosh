#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

void printArray(int* arrayPtr);

int main()
{
    int myArrayA[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                  // 10 elements
    int myArrayB[]{20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,      // 20 elements
        31, 32, 33, 34, 35, 36, 37, 38, 39};
    int myArrayC[]{50, 51, 52, 53, 54, 55};                         // 6 elements

    cout << sizeof(myArrayA) << endl;
    cout << endl;
    printArray(myArrayA);
    

    /*
    cout << "Data type : Address of - Pointer" << endl;
    cout << "Data type of <&myArrayA> : " << typeid(&myArrayA).name() << endl;
    cout << "Data type of <&myArrayA> : " << typeid(&myArrayB).name() << endl;
    cout << "Data type of <&myArrayC> : " << typeid(&myArrayC).name() << endl;
    */

    /*
    cout << "Data type of <myArrayA, myArrayB, myArrayC> : " << typeid(myArrayA).name() << endl;
    cout << "Output of <myArrayA> : " << myArrayA << endl;
    cout << "Sizeof <myArrayA> : " << sizeof(myArrayA) << endl;

    cout << endl;

    cout << "Data type of <&myArrayA> : " << typeid(&myArrayA).name() << endl;
    cout << "Output of <&myArrayA> : " << &myArrayA << endl;
    cout << "Sizeof <&myArrayA> : " << sizeof(&myArrayA) << endl;

    cout << endl;

    cout << "Data type of <*(&myArrayA> : " << typeid(*(&myArrayA)).name() << endl;
    cout << "Output of <*(&myArrayA> : " << *(&myArrayA) << endl;
    cout << "Sizeof <*(myArrayA)> : " << sizeof(*(&myArrayA)) << endl;

    cout << endl;

    cout << "Data type of <**(&myArrayA)> : " << typeid(**(&myArrayA)).name() << endl;
    cout << "Output of <**(&myArrayA)> : " << **(&myArrayA) << endl;
    cout << "Sizeof <**(&myArrayA)> : " << sizeof(**(&myArrayA)) << endl;

    cout << endl;

    cout << "Type <&myArrayA + 1> : " << typeid((myArrayA + 1)).name() << endl;
    cout << "The address immediately after myArrayA. &myArrayA + 1 : " << (&myArrayA + 1) << endl;
    cout << "Type <*(&myArrayA + 1)> : " << typeid(*(&myArrayA + 1)).name() << endl;
    cout << "Dereference *(&myArrayA + 1) : " << *(&myArrayA + 1) << endl;

    cout << endl;
    */



    return 0;
}

void printArray(int* arrayPtr)
{
    cout << sizeof(arrayPtr) << endl;
}