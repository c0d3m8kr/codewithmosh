//
// Created by R W on 2022-05-03.
//

#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

#include "Node.h"

using namespace std;

class LinkedList {
    public:
        void addFirst(int value);
        void addLast(int value);
        void deleteFirst();
        void deleteLast();
        bool contains(int value);
        int indexOf(int value);
        void printAll();
        void releaseMem();
        void reverse();
        void rev();
        int getKthFromTheEnd(int k);
        int getKthFromTheEnd2(int k);

    private:
        Node* first = NULL;
        Node* last = NULL;
        void deleteMem(Node* n);
};


#endif //LINKEDLISTS_H
