#include<iostream>
using namespace std;
int sum=0;
int	row_sum(int arr[][100],int size,int size1)
	{
	int sum=0;
	int centralrow=size/2;
	if(size%2==0){
		cout<<"\n No central row is present ";
		return 0;
	}
		for(int c=0;c<size1;c++){
		sum=sum + arr[centralrow][c];	
		}
		cout<<"\n sum of central row is "<<sum;
	}
int main()
{
	int size1, size;
	cout<<"enter size for row = ";
	cin>>size;
	cout<<"enter size for col = ";
	cin>>size1;
	int arr[size][100];
	cout<<"Enter number of element for matrix \n";
	for(int r=0;r<size;r++)
	{
		for (int c=0 ;c<size1 ; c++)
		{
			cout<<"enter element at ("<<r<<","<<c<<") : ";
			cin>>arr[r][c];
		}
	}
	row_sum(arr,size ,size1);
}