#include<iostream>
using namespace std;
void displaymessage()
{
	cout<<"Hello from the function display message.\n";
}
int main()
{
	cout<<"hello from main.\n";
	displaymessage();
	cout<<"Back in function main again\n";
	return 0;
}
