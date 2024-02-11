#include<iostream>
using namespace std;
 int main()
{
	int size,size1;
	cout<<"enter size of row  ";
	cin>>size;
	cout<<"enter size of col  ";
	cin>>size1;
	int arr[size][size1];
	cout<<"enetr number of element for row and coloumn = ";
	for(int r=0;r<size;r++)
	{
		for(int c=0;c<size1;c++)
		{
			cin>>arr[r][c];
		}
	
	}
		cout<<"enterd matrix is  \n";
		for(int r=0;r<size;r++)
		{
			for (int c=0;c<size1;c++)
			{
				cout<<arr[r][c]<<" ";
			}
			cout<<endl;
		}
		cout<<"enterd matrix transpose is  \n";
		for(int r=0;r<size;r++)
		{
			for (int c=0;c<size1;c++)
			{
				cout<<arr[c][r]<<" ";
			}
			cout<<endl;
		}
	
}