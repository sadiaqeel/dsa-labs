//Task 1
#include <iostream>
using namespace std;
struct Node {
int data;
Node* next;
};
Node* createNode(int data) {
Node* newNode = new Node();
newNode->data = data;
newNode->next = nullptr;
return newNode;
}
void deleteFromMid(Node** head, int data) {
if (*head == nullptr) {
cout << "List is empty" << endl;
return;
}
int length = 0;
Node* temp = *head;
do {
temp = temp->next;
length++;
} while (temp != *head);
int pos = length / 2;
temp = *head;
for (int i = 0; i < pos - 1; i++) {
temp = temp->next;
}
Node* nodeToDelete = temp->next;
temp->next = nodeToDelete->next;
delete nodeToDelete;
}
void printList(Node* head) {
Node* temp = head;
do {
cout << temp->data << " ";
temp = temp->next;
} while (temp != head);
cout << endl;
}
int main() {
Node* head = nullptr;
Node* node1 = createNode(10);
Node* node2 = createNode(20);
Node* node3 = createNode(30);
Node* node4 = createNode(40);
Node* node5 = createNode(50);
node1->next = node2;
node2->next = node3;
node3->next = node4;
node4->next = node5;
node5->next = node1;
head = node1;
cout << "Original List: ";
printList(head);
deleteFromMid(&head, 30);
cout << "List after deletion: ";
printList(head);
return 0;
}