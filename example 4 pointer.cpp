#include<iostream>
using namespace std;
int main()
{
	int myarray[5]={1,1,2,3,5};
	int *ptrvar;
	ptrvar=myarray;
	for(int i=0;i<5;i++)
	{
		cout<<*ptrvar<<"\t";
		ptrvar++;
	}
}