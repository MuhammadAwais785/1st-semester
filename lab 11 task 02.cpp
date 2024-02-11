#include<iostream>
using namespace std;
	void col_sum(int arr[][100],int rows,int cols)
{
	int sum=0;
	int centralCol=cols/2;
	if(cols%2==0)
	{
		cout<<" \n No central matrix is present\n  ";
		return ;
	}
	cout<< "\n central col is : ";
	for(int r=0;r<rows;r++)
	{
		cout<<arr[r][centralCol]<<" ";
		sum=sum+arr[r][centralCol];
	}
	cout<<" \n sum of central col is "<<sum<<endl;
}
int main()
{
	int rows,cols;
	cout<<"enter number of rows = ";
	cin>>rows;
		cout<<"enter number of cols = ";
	cin>>cols;
	int arr[rows][100];
	cout<<"\n enter element for rows and coloumn \n ";
	for(int r=0;r<rows;r++)
	{
		for(int c=0;c<cols;c++)
		{
			cout<<"\n Enter element at ( "<<r<<","<<c<<" ) : ";
			cin>> arr[r][c];
		}
	}
	col_sum(arr,rows,cols);
}