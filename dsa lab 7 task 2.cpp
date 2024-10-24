//Task 2
#include <iostream>
#include <string>
using namespace std;
struct Node {
    string item;
    Node* next;
};

Node* createNode(const string& item) {
    Node* newNode = new Node();
    newNode->item = item;
    newNode->next = NULL;  
    return newNode;
}
void addItem(Node*& head, const string& item) {
    Node* newNode = createNode(item);
if (head == NULL) {
        head = newNode;
    } else {

3

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << item << " added to the list.\n";
}
void removeItem(Node*& head, const string& item) {
    if (head == NULL) {
        cout << "The list is empty.\n";
        return;
    }
if (head->item == item) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << item << " removed from the list.\n";
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->item != item) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        cout << item << " not found in the list.\n";
    } else {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << item << " removed from the list.\n";
    }
}
void displayList(Node* head) {
    if (head == NULL) {
        cout << "The list is empty.\n";
        return;
    }

4

cout << "Grocery List:\n";
    Node* temp = head;
    while (temp != NULL) {
        cout << "- " << temp->item << "\n";
        temp = temp->next;
    }
}


int main() {
    Node* head = NULL;
    int choice;
    string item;

    do {
        cout << "\n--- Grocery Shopping List Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. View List\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  

        switch (choice) {
            case 1:
                cout << "Enter item to add: ";
                getline(cin, item);
                addItem(head, item);
                break;
            case 2:
                cout << "Enter item to remove: ";
                getline(cin, item);
                removeItem(head, item);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                cout << "Exiting...\n";

5

                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}