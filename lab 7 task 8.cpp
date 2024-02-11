#include<iostream>
using namespace std;
void showdollars(double);

int main()
{
	double payrate, hoursworked, wages;
	
	cout<<"how many hours have you worked ?" ;
	cin>>hoursworked;
	cout<<"what is your hourly pay rate in rupees?" ;
	cin>>payrate;
	wages=hoursworked*payrate;
	showdollars(wages);
	return 0;

}

	void showdollars(double var)
	{
	float dollar = 0;
	dollar = var/280;
	cout<<"dollar price is : " << dollar;
}

