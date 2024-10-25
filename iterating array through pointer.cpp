#include<iostream>
using namespace std;
int main()
{
	int arr[5]={13,35,66,98,78};
	int *p=arr;
	cout<<"Iterating through array: \n";
	for(int i=0;i<5;i++){
		cout<<"Element "<<i+1<<" = "<<*p<<endl;
		++p;
	}
}
