#include<iostream>
using namespace std;
void display(int arr[], int size)
{
	for(int ind=0; ind < size; ind++)
	{
	
		cout << arr[ind] << "  ";
	}
}

int main()
{
	int size ;
		cout << "Enter size of array:";
	
	cin>>size;
	int arr[size];

	
	for(int ind =0 ; ind < size ; ind++)
	{ 
		cin >> arr[ind];
	}
	display(arr,size);
	return 0;
}