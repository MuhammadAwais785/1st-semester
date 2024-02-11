#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

void login()
{
	string username="awais";
	string password="123456789";
	
	string a;
	string b;
	cout<<"\n\n";
	cout<<"\t\t\t =========================================== "<<"\n";
	cout<<"\t\t\t =========================================== "<<"\n";
	cout<<"\t\t\t ==                  LOGIN                == "<<"\n";
	cout<<"\t\t\t =========================================== "<<"\n";
	cout<<"\t\t\t =========================================== "<<"\n";
	cout<<"\t\t\t Enter username:"<<"\t";
	cin>>a;
	cout<<"\n";
	
	cout<<"\t\t\t Enter Password:"<<"\t";
	cin>>b;
	cout<<"\n";
	
	if(a==username && b==password)
	{
		cout<<"\t\t\t Login Successful"<<"\n";
	}
	
	else
	{
		cout<<"\t\t\t Invalid username and password:";
		return 0;
	}
	
	system("pause");
	system("cls");
}

void introduction()
{
	cout<<"\n\n";
	cout<<"\t\t\t ======================================== "<<"\n";
	cout<<"\t\t\t ==                                    == "<<"\n";
	cout<<"\t\t\t ==             MUHAMMAD AWAIS         == "<<"\n";
	cout<<"\t\t\t ==               2330-0080            == "<<"\n";
	cout<<"\t\t\t ==                  BSSE              == "<<"\n";
	cout<<"\t\t\t ==                                    == "<<"\n";
	cout<<"\t\t\t ==    SUBMITTED TO:                   == "<<"\n";
	cout<<"\t\t\t ==  SIR ADEEL SHABIR                  == "<<"\n";
	cout<<"\t\t\t ==                                    == "<<"\n";
	cout<<"\t\t\t ======================================== "<<"\n";
}

int main()
{
	login();
	introduction();
}
