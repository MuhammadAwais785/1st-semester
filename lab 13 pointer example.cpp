#include<iostream>
using namespace std;
int main()
{
	  int number=88;
	  int *pNumber;
	  pNumber=&number;
	  int *pAnother=&number;
	  cout<<*pNumber<<endl;
	  cout<<pNumber<<endl;
	  cout<<number<<endl;
	  *pNumber=99;
	  cout<<*pNumber<<endl;
	  cout<<&pNumber<<endl;
}