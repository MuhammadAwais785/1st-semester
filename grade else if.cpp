#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"a=";
	cin>>a;
	if(a>90&&a<=100)

	cout<<"A+ grade";
	else if(a>=80&&a<=90)
	cout<<"A grade";
	else if(a>=70&&a<=79)
	cout<<"B grade";
	else if(a>=60&&a<=69)
	cout<<"C grade";
	else if(a>=50&&a<=59)
	cout<<"D grade";
	else if(a>=40&&a<=49)
	cout<<"F grade";
	else 
	cout<<"fail";
}
