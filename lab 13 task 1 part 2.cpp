#include<iostream>
using namespace std;
int main()
{
	int *pointVar,var;
	var=5;
	pointVar=&var;
	cout<<*pointVar<<endl;
}