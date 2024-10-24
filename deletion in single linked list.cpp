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
void deleteatstart(){
	node* temp=head;
	head=head->next;
	delete temp;
}
void deleteatend(){
	node* temp=head;
	if (head==nullptr){
	head=head->next;
	delete temp;
	return;
	}
	if(head->next==nullptr){
		delete head;
		head==nullptr;
		return;
	}
	while(temp->next->next!=nullptr){
		temp=temp->next;
	}
	delete temp->next;
	temp->next=nullptr;
}
void deleteatpos(int pos){
		node* temp=head;
		if(head==nullptr){
			cout<<"The list is empty!\n";
			return;
		}
		if(head->next==nullptr){
			head=head->next;
			delete temp;
			return;
		}
		for(int i=0; i<pos-1&&temp!=nullptr;i++){
			temp=temp->next;
		}
		if(temp==nullptr||temp->next==nullptr){
			cout<<"Invalid position entered by user!\n";
			return;
		}
		node* next=temp->next->next;
		delete temp->next;
		temp->next=next;
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
    deleteatstart();
	print();
	deleteatend();
	print();
	deleteatpos(2);
	print();
	
}