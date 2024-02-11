#include<iostream>
using namespace std;
int main()
{
	float var = 3.56;
	float *var1=&var;
	*var1=5.46;
	cout<<"the updated value is "<<var;
	
}