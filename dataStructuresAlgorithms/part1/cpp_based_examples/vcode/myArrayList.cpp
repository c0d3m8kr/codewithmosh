#include <iostream>
#include <string>

using namespace std;

class Node
{
    public:
        int value;
        Node* next;
};

void printList(Node* n);
void deleteList(Node* n);

int main()
{
    Node* head = new Node();
    Node* current = new Node();
    Node* tail = new Node();

    head->value = 100;
    head->next = current;

    current->value = 500;
    current->next = tail;

    tail->value = 1000;
    tail->next = NULL;

    printList(head);
    deleteList(head);

    return 0;
}

void printList(Node* n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}

void deleteList(Node* n)
{
    if (n != NULL)
        deleteList(n->next);
    else
        delete n;
}