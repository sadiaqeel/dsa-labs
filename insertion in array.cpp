#include<iostream>
using namespace std;
int main()
 {
 	int n,i;
 	int arr[10];
 	cout<<"Enter the size of array: ";
 	cin>>n;
 	 if (n>10 || n<0) {
        cout << "Error: Array size exceeds the maximum limit of 10." << endl;
        return 1;
    }
 	cout<<"Enter the elements of array: ";
 	for( i=0;i<n;i++){
 		cin>>arr[i];
	 }
	 cout<<"Array elements are: ";
	 for( i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
	//at start
	 int x;
	 cout<<"Enter the element to insert at start: ";
	 cin>>x;
	 if (n == 10) {
        cout << "Error: No space to insert the element." << endl;
        return 1;
    }
	 for(i=n;i>0;i--){
	 	arr[i]=arr[i-1];
	 }
	 arr[0]=x;
	 n++;
	 cout<<"Array after insertion at start: ";
	 for( i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
	 //at end
	 cout<<"Enter the element to insert at end: ";
	 cin>>x;
	 if (n == 10) {
        cout << "Error: No space to insert the element." << endl;
        return 1;
    }
	 arr[i]=x;
	 n++;
	 cout<<"Array after insertion at end: ";
	 for(i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
	 //at position
	 int pos;
	 cout<<"Enter the position to insert element: ";
	 cin>>pos;
	  if (pos < 1 || pos > n + 1) {
        cout << "Error: Invalid position!" << endl;
        return 1;
    }
	 cout<<"Enter the element: ";
	 cin>>x;
	 if (n == 10) {
        cout << "Error: No space to insert the element." << endl;
        return 1;
    }
	 for(int i=n;i>=pos;i--){
	 	arr[i]=arr[i-1];
	 }
	 arr[pos-1]=x;
	 n++;
	 cout<<"Array after insertion at position"<<pos<<": " ;
	 for(i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 
	 
	 
	 
 }
