#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}
int main()
{
	int a=14,b=89;
	cout<<"BEFORE SWAPPING: \n"<<" Variable1=   "<<a<<endl<<" Variable2=  "<<b<<endl;
	swap(&a,&b);
	cout<<"AFTER SWAPPING: \n"<<" Variable1=  "<<a<<endl<<" Variable2=  "<<b<<endl;
}
