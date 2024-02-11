#include<iostream>
using namespace std;
void diameter(int r)

{
	cout<<"double of radius (diameter) ="<< 2*r<<endl;
	
}
void area_of_circle(int r)
{
	cout<<"area of circle="<< 3.14*r*r<<endl;
}
int main()
{
	int a;
	cout<<"enter radius =";
	cin>>a;
	diameter(a);
	area_of_circle(a);
	return 0;
}
