#include<iostream>
using namespace std;
bool isEven_odd(int num)
{
	bool status;

	if (num%2==0)
	{
	cout<<"number is true\t";
	status=true;
	}
	 else
{
	cout<<"number is false\t";
	status=false;
	
}
	
	return status;
}
int main()
{
	int b;
	cout<<"enter numberis = ";
	cin>>b;
	cout<< isEven_odd(b);
}
