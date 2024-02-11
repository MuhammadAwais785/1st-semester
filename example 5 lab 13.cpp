#include<iostream>
using namespace std;
int main()
{
	int myarray[5]={2,4,6,8,10};
	int *myptr;
	myptr=myarray;
	cout<<"first element in array "<<*myptr<<endl;
	myptr++;
	cout<<"Next element in array : "<<*myptr<<endl;
	myptr+=1;
		cout<<"Next element in array : "<<*myptr<<endl;
	myptr--;
		cout<<"Next element in array : "<<*myptr<<endl;
	myptr-=1;
		cout<<"Next element in array : "<<*myptr<<endl;
	return 0;
}