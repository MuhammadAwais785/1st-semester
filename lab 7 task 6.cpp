#include<iostream>
using namespace std;
int find_largest(int num1,int num2,int num3)
{
	if(num1>num2&&num1>num3)
	 return num1;
	 else if(num2>num1&&num2>num3)
	 return num2;
	 else 
	 return num3;
	 
	 return 0;
}
int main()
{

	int a;
	cout<<"number 1 =";
	cin>>a;
	int b;
	cout<<"num 2 =";
	cin>>b;
	int c;
	cout<<"number 3=";
	cin>>c;
cout<<"largest number=  "	<< find_largest(a,b,c);
}
