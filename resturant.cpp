#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class Orders {
public:
    Node* front;
    Node* rear;


    Orders() {
        front = rear = NULL;
    }

    void addOrder(string data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "New Order: " << data << "\n";
    }

    bool isEmpty() {
        return front == NULL;
    }

    void processOrder() {
        if (isEmpty()) {
            cout << "No Orders\n";
            return;
        }
        string value = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL) {
            rear = NULL;
        }
        cout << "Processing: " << value << "\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "No orders\n";
            return;
        }
        cout << "Current Orders: ";
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};

int main() {
    Orders o;
    while (true) {
        int choice;
        cout << "Restaurant Order Processing\n";
        cout << "1) Add Order\n";
        cout << "2) Process Order\n";
        cout << "3) Display Orders\n";
        cout << "4) Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                string order;
                cout << "Enter order: ";
                cin >> order;
                o.addOrder(order);
                break;
            }
            case 2:
                cout << "Processing Order\n";
                o.processOrder();
                break;
            case 3:
                o.display();
                break;
            case 4:
                exit(0);
            default:
            	cout<<"invalid choice";
        }
    }

    return 0;
}
