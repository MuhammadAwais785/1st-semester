#include<iostream>
using namespace std;
	int main()
{
	int num;
	cout<<"enter num=";
	cin>>num;
	int seq=0;
	for(int i=1;i<=num;i=i+2)
	{
		int fact=1;
		for(int j=i;j>=1;j--){
		
		fact=fact*j;
	}
		seq=seq+fact;
	}
	cout<<"sequence="<< seq;
}

