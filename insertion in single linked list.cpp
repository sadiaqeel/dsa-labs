#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head=nullptr;
void insert(int n){
	node* newnode=new node;
	newnode->data=n;
	newnode->next=head;
	head=newnode;
}
void insertatend(int n){
    node *newNode = new node;
    newNode->data = n;
    newNode->next= nullptr;
    
        if (head == nullptr) {
            head = newNode;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
}

void insertatposition(int pos,int n) {
    node *newNode = new node;
    newNode->data = n;
if (pos==1){

 newNode->next = head;
    head = newNode; 
}
node *temp=head;
for(int i=0;i<pos-1 && temp!=NULL;i++){
	temp=temp->next;
}
if(temp==NULL){
	cout<<"Invalid position"<<endl;
}
  newNode->next=temp ->next;
  temp -> next=newNode;
}
void print(){
	cout<<"Array elements are: \n";
	node* temp=head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
			temp=temp->next;
	}
cout<<endl;
}
int main(){
	insert(11);
	insert(89);
	insert(13);
	insert(77);
	insert(88);
	insert(56);
	print();
   insert(90);
	print();
	insertatend(33);
	print();
	insertatposition(2,67);
	print();
}