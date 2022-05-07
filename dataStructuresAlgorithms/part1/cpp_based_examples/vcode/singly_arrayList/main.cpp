#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

int main()
{
    Node* head = NULL;
    Node* current = NULL;
    Node* tail = NULL;

    head = new Node();
    current = new Node();
    tail = new Node();

    head->value = 100;
    head->next = current;

    current->value = 200;
    current->next = tail;

    tail->value = 300;

    for (Node* position = head; position != NULL; position = position->next)
    {
        cout << position->value << endl;
    }

    return 0;
}