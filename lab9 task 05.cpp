#include<iostream>
using namespace std;
bool checkAge(int arr[],int size,int myAge)
{
	for(int index=0;index<size;index++)
	{
	
		if(arr[index]==myAge)
		{
			cout<<"your age is in record  ";
			return true;
		}
	}
	cout<<"record not found  ";
	return false;
}
int main()
{
	int size;
	cout<<"enter array size is ";
	cin>>size;
	int arr[size];
	for(int index=0;index<size;index++)
	{
		cout<<"enter student age "<<index+1 <<" is = ";
		cin>>arr[index];
	}
	int myAge;
	cout<<"enter my age is ";
	cin>>myAge;
	cout<<checkAge(arr,size,myAge);
	return 0;
}