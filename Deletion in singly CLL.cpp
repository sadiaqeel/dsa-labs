#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *head=NULL;
void insert(int n){
	Node *newNode=new Node;
	newNode->data=n;
	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}else{
		Node *temp=head;
		while(temp->next!=head){
	    temp=temp->next;
    }
	temp->next=newNode;
	newNode->next=head;
    head=newNode;	
}
}
void deleteatend() {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }if (head->next == head) {
       delete head;
        head = NULL;
    } else {
        Node *temp = head;
        Node *prev = NULL;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        head->prev=prev;
        delete temp;
    }
}
void deleteatstart() {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }

    Node *temp = head;
    if (head->next == head) {
        // Only one node in the list
        head = NULL;
    } else {
        Node *last= head;
        while (last->next != head) {
            last = last->next;
        }
        head = head->next;
        last->next = head;
    }
    delete temp;
}

Node *temp=head;
void deleteatposition(int pos) {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }
    if (pos == 1) {
        Node *temp = head;
        if (head->next == head) {
            head = NULL;  
        } else {
            Node *last = head;
            while (last->next != head) {
                last = last->next;
            }
            head = head->next;
            last->next = head;
        }
        delete temp;
        return;
    }
    Node *temp = head;
    Node *prev = NULL;
    for (int i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp->next == head && pos != 1) {
        cout << "Invalid position" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}


void print(){
	Node *temp=head;
	cout<<"elements in array is"<<endl;
do {
        cout << temp->data << " ";  
        temp = temp->next;          
    } while (temp != head);         

    cout << endl;
}

int main(){
	insert(8);
	insert(6);
	insert(4);
	insert(2);
	print();
	cout<<"Linked list after deletion"<<endl;
deleteatposition(3);
	print();
	
	return 0;
}
