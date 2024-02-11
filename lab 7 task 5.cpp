#include<iostream>
using namespace std;
void swap(int num1,int num2)
{
	int num3 ;
	num3=num2;
	num2=num1;
	num1=num3;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	
	
	
}
int main()
{
	int num1;
	int num2;
	cout<<"num1= ";
	cin>>num1;
	cout<<"num2= ";
	cin>>num2;
swap(num1,num2);
	return 0;
}
