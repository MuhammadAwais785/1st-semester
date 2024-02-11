#include<iostream>
#include<math.h>
using namespace std;
int factorial(int num)
{
	int i=1;
	for(int index=1;index<=num;index++)
	{
		i=i*index;
    }
    return (i);
}
int main()
{
	int num1,fac1,fac2,sum,seq=0;
	cout<<"Enter a number"<<endl;
	cin>>num1;
	for(int index=1;index<=num1;index++)
	{
		fac1=factorial(index);
	}
	for(int index2=2;index2<=4;index2++)
	{
		fac2=factorial(index2);
	int	result = pow(fac1,fac2)
	}
	sum=sum+result;
	cout<<sum<<endl;
}
