#include<iostream>
using namespace std;

int main(){
	
	int num[10];
	int i=0;
	int sum = 0;
	float avg = 0;
	
	do{
		cout << "Enter " << i + 1 << " number: ";
		cin >> num[i];
		sum += num[i];
		i++;
	}while(i < 10);
	
	cout << "Sum is " << sum << endl;
	avg = sum / 10.0;
	cout << "Average is " << avg << endl;
	return 0; 
}
