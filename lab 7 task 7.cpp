#include<iostream>
using namespace std;
void showdouble(int);
int main()
{
	int num;
	for(num=0;num<10;num++)
	showdouble(num);
	return 0;
}
void showdouble(int value)
{cout<<value<<" "<<(value*2)<<endl;
}
