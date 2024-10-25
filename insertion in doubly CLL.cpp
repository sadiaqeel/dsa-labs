#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = nullptr;
void insertAtStart(int n) {
    Node* newNode = new Node;
    newNode->data = n;
    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        Node* tail = head->prev;  
        newNode->next = head;
        newNode->prev = tail;
        head->prev = newNode;
        tail->next = newNode;
        head = newNode;  
    }
}
void insertAtEnd(int n) {
    Node* newNode = new Node;
    newNode->data = n;

    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        Node* tail = head->prev;  
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
    }
}
void insertAtPosition(int pos, int n) {
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node;
    newNode->data = n;

    if (pos == 1) {
        insertAtStart(n);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }
    if (temp->next == head && count < pos - 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}
void printList() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << "List elements: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
  
    insertAtStart(3);
    insertAtStart(5);
     insertAtStart(9);
    insertAtStart(8);
      printList();
    insertAtEnd(7);
      printList();
    insertAtPosition(2, 4);   
    printList();

    return 0;
}
