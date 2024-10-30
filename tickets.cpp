#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Tickets {
public:
    Node* front;
    Node* rear;

    Tickets() {
        front = rear = NULL;
    }

    void addTicket(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "New Ticket: " << data << "\n";
    }

    bool isEmpty() {
        return front == NULL;
    }

    void processBookings() {
        if (isEmpty()) {
            cout << "No bookings\n";
            return;
        }
        int value = front->data;
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
            cout << "No Bookings\n";
            return;
        }
        cout << "CurrentBookings: ";
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};

int main() {
   Tickets t;
    while (true) {
        int choice;
        cout << "Ticket Processing\n";
        cout << "1) Add Ticket\n";
        cout << "2) Process Ticket\n";
        cout << "3) Display Tickets\n";
        cout << "4) Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                int ID;
                cout << "Enter Booking ID: ";
                cin >> ID;
                t.addTicket(ID);
                break;
            }
            case 2:
                cout << "Processing Order\n";
                t.processBookings();
                break;
            case 3:
                t.display();
                break;
            case 4:
                exit(0);
            default:
            	cout<<"invalid choice";
        }
    }

    return 0;
}
