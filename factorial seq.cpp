#include<iostream>
using namespace std;
int main()
{
 int arr[3][3]={0};
	for(int r=1;r<3;r++)
	{
		for(int c=r;c<r+1;c++)
		{
			cout<<arr[r][c]=r*c;
		}
	}
}

