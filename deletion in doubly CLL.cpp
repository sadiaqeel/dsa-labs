#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
Node* head = nullptr;
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
void deleteAtStart() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    if (head->next == head) {
   
        head = nullptr;
        delete temp;
    } else {
        Node* tail = head->prev;
        head = head->next;
        tail->next = head;
        head->prev = tail;
        delete temp;
    }
    cout << "Node deleted at start." << endl;
}

void deleteAtEnd() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* tail = head->prev;

    if (head->next == head) {
       
        head = nullptr;
        delete tail;
    } else {
        Node* secondLast = tail->prev;
        secondLast->next = head;
        head->prev = secondLast;
        delete tail;
    }
    cout << "Node deleted at end." << endl;
}

void deleteAtPosition(int pos) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    if (pos == 1) {
        deleteAtStart();
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < pos && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (count != pos || temp == head) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* prevNode = temp->prev;
    Node* nextNode = temp->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete temp;
    cout << "Node deleted at position " << pos << "." << endl;
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
   
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    printList();

   
    deleteAtStart();    
    printList();

    deleteAtEnd();     
    printList();

    deleteAtPosition(2);
    printList();

    return 0;
}
