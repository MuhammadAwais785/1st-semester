#include<iostream>
using namespace std;
const int coloumn=100;
int	findmax(int arr[][coloumn],int size,int size1)
{
		int max1;
	max1=arr[0][0];
	for(int r=0;r<size;r++)
	{
		for(int c=0;c<size1;c++)
		{
			if(arr[r][c]>max1)
			{
				max1=arr[r][c];
				
			}
		}
	
	}
	return max1;
}
int main()
{
	int size,size1;
	cout<<"enter size of row  ";
	cin>>size;
	cout<<"enter size of col  ";
	cin>>size1;
	int arr[100][100];
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
			cout<<endl<<"\n";
		}
	cout<<" so maximum is "<<	findmax(arr,size,size1);
		
}