#include<iostream>
using namespace std; 
int main()
{
	int size;
	int number[size];
int count ;
int highest=number[0];
cout<<"enter size :";
cin>>size;

	for(count=1;count<size;count++)
	{
	
	cout<<"enter value for array :";
	cin>>number[count];
}
			for(count=0;count<size;count++)
{
		if(number[count]>highest)
		{
			highest=number[count];
			cout<<highest;
		}


}
}

