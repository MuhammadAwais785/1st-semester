#include<iostream>
using namespace std;
 void myswap(int* p,int* d){
 
 int a;
 a=*p;
 *p=*d;
 *d=a;
}
int main()
{
	int p=4;
	int d=5;
	cout<<"value before is "<<d<<" "<<p<<endl;
	myswap(&p,&d);
	cout<<"swap value is ";
	cout<<d<<" "<<p;
}