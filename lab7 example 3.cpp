#include<iostream>
using namespace std;

bool isvalid(int num)


{
	bool status;
	if (num>=1&&num<=100)
	status=true;
	else
	status=false;
	return status;
}
int main()
{
int a;
cout<<"number =";
cin>>a;
cout<<" "<< isvalid(a );
 
}
