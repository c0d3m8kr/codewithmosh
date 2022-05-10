#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main()
{
    LinkedList* myLList = new LinkedList;
    // myLList contains the starting address to a new LinkedList object

    myLList->addFirst(5);
    myLList->addFirst(10);
    myLList->addFirst(100);
    myLList->addFirst(800);
    myLList->addLast(900);
    myLList->addLast(2000);
    myLList->printAll();

    cout << endl;

    cout << "The 6th node from end is: " << myLList->getKthFromTheEnd(6) << endl;
    cout << "The 6th node from end is: " << myLList->getKthFromTheEnd2(6) << endl;

    /*
    //cout << boolalpha << "2550 is in the linked list: " << myLList->contains(2550) << endl;
    //cout << "5 is located at index: " << myLList->indexOf(5) << endl;
    //cout << "900 is located at index: " << myLList->indexOf(900) << endl;
    cout << endl;
    //myLList->deleteFirst();
    //myLList->deleteFirst();
    //myLList->deleteLast();
    //cout << endl;
    //myLList->printAll();
    //cout << endl;
    //cout << "900 is located at index: " << myLList->indexOf(900) << endl;
    myLList->reverse();
    myLList->printAll();
    cout << endl;
    */
    myLList->reverse();
    myLList->printAll();
    myLList->releaseMem();

    return 0;
}
