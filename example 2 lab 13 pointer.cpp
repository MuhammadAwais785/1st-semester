#include<iostream>
using namespace std;
int main()
{
	int thing_var;
	int *thing_ptr;
	thing_var=2;
	cout<<"thing "<<thing_var<<"\n";
	thing_ptr=&thing_var;
	*thing_ptr=3;
	cout<<"things "<<thing_var<<"\n";
	cout<<"things "<<*thing_ptr<<"\n";
}