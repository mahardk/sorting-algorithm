#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* sortedInsert(Node* sorted, Node* newNode) {
    if (!sorted || newNode->data <= sorted->data) {
        newNode->next = sorted;
        return newNode;
    }

    Node* current = sorted;
    while (current->next && current->next->data < newNode->data) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;

    return sorted;
}

Node* insertionSort(Node* head) {
    Node* sorted = nullptr;
    Node* current = head;

    while (current) {
        Node* nextNode = current->next;
        sorted = sortedInsert(sorted, current);
        current = nextNode;
    }

    return sorted;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void push(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = nullptr;
    push(head, 3);
    push(head, 1);
    push(head, 4);
    push(head, 2);

    cout << "List: ";
    printList(head);

    head = insertionSort(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
