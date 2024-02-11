#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int count=0;
	int averg;
	int arr[10]={10,24,7,64,5,6,43,23,45,23};
	cout<<"array is = ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
			count++;
	}
cout<<"\n Total sum is = "<<sum<<endl;	
cout<<"Total number in array is = "<<count++<<endl;
 averg=sum/count;
 cout<<"averg is "<<averg<<endl;
 cout<<"updated marks is ";
 for(int i=0;i<10;i++){
 
  if(arr[i]>averg&&arr[i]%8==0)
  {
  	arr[i]=arr[i]+10;
  }
  else if(arr[i]<averg&&arr[i]%7==0)
  {
  	arr[i]=arr[i]-10;
  }
  cout<<arr[i]<<" ";
 }
}