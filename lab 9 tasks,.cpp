#include<iostream>
using namespace std;

void display(int arr[],int size)
{
	cout<<"display array ";
	for(int i=0;i<size;i++)
	{
		
		cout<<arr[i]<<" ";
	}
}


 void modify(int arr[],int size)
{
	
		int i;
	cout<<"\n enter modify index ( 0 to "<< size-1 << ") : ";
	cin>>i;
	if(i>=0&&i<size)
	{
		cout<<"enter new value for index ";
		cin>>arr[i];
		cout<<"modification successful.\n";
	}
	else
	{
		cout<<"invalid index.and modification failed .";
	}


}
void mod_display(int arr[], int size)
{
	cout<<"\n  display m Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	
    int size = 0;

	cout<<"enter data for ayrray 1 : \n";
	cout<<"enter size is ";
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter "<< i+1 << " element : ";
		cin>>arr[i];
	}
	
	
	display(arr,size);
	
	
	modify(arr ,size);
	
	mod_display(arr, size);
}