#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // circular link
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode; // This inserts at the head
		    }
}

void insertatpos(int pos, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // circular link
    } else {
        // If the position is 1, insert at the head
        if (pos == 1) {
            Node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        } else {
            // Insertion at a specific position
            Node *temp = head;
            for (int i = 1; i < pos - 1 && temp->next != head; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}
void insertatend(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        head = newNode;
        newNode->next = NULL; 
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
       
    }
}
void print() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    cout << "Elements in list: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    
     insertatpos(2, 8);
    print();


    return 0;
}

