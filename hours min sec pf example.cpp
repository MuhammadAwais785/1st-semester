#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	for(int hours=0; hours<=24;hours++)
	{
	for(int min=0;min<=60;min++)
	{
	
		for(int sec=0;sec<=60;sec++)
		{
			cout<< setw(2)<<hours<<":";
				cout<< setw(2)<<min<<":";
					cout<< setw(2)<<sec<<":"<<endl;
					cout<<endl;
			
		}
	}
	}
}
