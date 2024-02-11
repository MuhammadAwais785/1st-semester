#include<iostream>
using namespace std;
int main()
{
	for (int n=2;n<=100;n++)
	{
		bool isprime=true;
		for(int i=2;i<=n/2;i++)
		if(n%i==0)
		{
		
		isprime=false;
	}
	
	if(isprime){
	
	cout<<n<<" ";
}
}

}
