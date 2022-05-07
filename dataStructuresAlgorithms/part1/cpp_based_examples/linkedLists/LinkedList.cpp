//
// Created by R W on 2022-05-03.
//
#include "LinkedList.h"
#include <iostream>
#include <string>

using namespace std;

void LinkedList::addLast(int value)
{
    // create node
    Node* node = new Node();
    node->value = value;
    // check if list is empty
    if (first == NULL){
        first = node;
        last = node;
    }
    else{
        last->next = node;  // last (n - 1) points to this node now
        last = node;        // update last to equal this new node
    }
}

void LinkedList::addFirst(int value)
{
    // Create new node
    Node* node = new Node();
    node->value = value;
    if (first == NULL){
        first = node;
        last = node;
    }
    else {
        node->next = first;
        first = node;
    }
}

void LinkedList::printAll()
{
    for(Node* n = first; n != NULL; n = n->next)
    {
        cout << n->value << endl;
    }
}

void LinkedList::deleteFirst()
{
    if (first == NULL)
        cout << "The list is empty!" << endl;
    else{
        Node* temp = first->next;
        delete first;
        first = temp;
    }
}

void LinkedList::deleteLast()
{
    if (first == NULL)
        cout << "The list is empty!" << endl;
    else{
        // traverse node list to get to n - 1
        Node* previous = NULL;
        for (Node* walking = first; walking != NULL; walking = walking->next){
            if (walking->next == NULL)
                break;
            previous = walking;
        }
        delete last;
        last = previous;
        previous->next = NULL;
    }
}

bool LinkedList::contains(int value) {
    for (Node* seeker = first; seeker != NULL; seeker = seeker->next){
        if (seeker->value == value)
            return true;
    }
    return false;
}

int LinkedList::indexOf(int value) {
    int index = 0;
    int fail = -1;

    for (Node* seeker = first; seeker != NULL; seeker = seeker->next){
        if (seeker->value == value){
            return index;
        }
        else
            index++;
    }
    return fail;
}

void LinkedList::releaseMem() {
    LinkedList::deleteMem(first);
}

void LinkedList::deleteMem(Node *n) {
    if (n == NULL)
        delete n;
    else
        deleteMem(n->next);
}

void LinkedList::reverse(){
    // list.reverse();
    // var array = list.toArray();
    // System.out.println(Arrays.toString(array);
    if (first == NULL && last == NULL){
        cout << "List is empty!" << endl;
        return;
    }
    Node* tempFirst = first;
    Node* previousNode = first;
    Node* currentNode = first->next;
    Node* nextNode = NULL;
    while (currentNode != NULL){
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }

    last = first;
    last->next = NULL;
    first = previousNode;
}

void LinkedList::rev(){
    Node* nextPtr = NULL;
    Node* currentPtr = first->next;
    Node* prevPtr = first;

    while (currentPtr != NULL){
        nextPtr = currentPtr->next;
        currentPtr->next = prevPtr;
        prevPtr = currentPtr;
        currentPtr = nextPtr;
    }
    last = first;
    last->next = NULL;
    first = prevPtr;
}




