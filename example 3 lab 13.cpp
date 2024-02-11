#include<iostream>
using namespace std;
int main()
{
	int i=88;
	int d=55;
	int *iPtr=&i;
	cout<<"*iptr = "<<*iPtr<<"\n";
	int *dPtr=&d;
	cout<<"*idptr = "<<*dPtr<<"\n";
	iPtr=&d;
	cout<<"iptr = "<<iPtr<<"\n";
	dPtr=&i;
	cout<<"dptr = "<<dPtr<<"\n";
	iPtr=&i;
	cout<<"iptr = "<<iPtr<<"\n";
	int j=99;
	iPtr=&j;
	cout<<"iptr = "<<iPtr;
}