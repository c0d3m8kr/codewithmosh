#include <iostream>
#include <string>
#include "Array.h"

using namespace std;

int main()
{
    Array myArray(3);

    myArray.insert(10);
    myArray.insert(20);
    myArray.insert(30);
    myArray.insert(60);
    myArray.insert(100);
    myArray.insert(200);
    myArray.insert(800);
    myArray.removeAt(1);
    //myArray.removeAt(2);
    cout << "Index of 200 is: " << myArray.indexOf(200) << endl;
    myArray.insert(1000);
    myArray.insert(8888);
    //myArray.removeAt(0);

    myArray.print();

    myArray.free();
    myArray.~Array();

    return 0;
}
