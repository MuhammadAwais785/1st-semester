#include<iostream>
using namespace std;
int main()
{
	int const numSemester =8;
	int const numSubject =4;
	
	int arr[numSemester][numSubject];
		double sgpa[numSemester];
	
	int const total_cgpa=4;
	double cgpa=0.0;
	char grade;
	
	for(int sem=0;sem<numSemester;sem++)
	{
		double totalSem=0.0;
		int totalCreditHour=0;
		cout<<"\n enter the number of subject marks in semester "<<sem+1<<endl;
		for(int sub=0;sub<numSubject;sub++)
		{
			int creditHour=0;
			cout<<"\n enter marks for subject "<<sub+1<<" in semester " <<sem+1<<" : ";
			cin>>arr[sem][sub];	
			cout<<"\n enter creditHours for subject "<<sub+1<<" in semester "<<sem+1<<" : ";	
			cin>>creditHour;
			
			
			if (arr[sem][sub]>=80&&arr[sem][sub]<=100)
			{
				sgpa[sem]=4.0;
				grade='A';	
			}	
			else if (arr[sem][sub]>=65&&arr[sem][sub]<=79)
			{
				sgpa[sem]=3.0;
				grade='B';	
			}
			else if (arr[sem][sub]>=50&&arr[sem][sub]<=64)
			{
				sgpa[sem]=2.0;
				grade='C';	
			}
		else if (arr[sem][sub]>=40&&arr[sem][sub]<=49)
			{
				sgpa[sem]=1.0;
				grade='D';	
			}
			else{
                sgpa[sem] = 0.0;
                grade = 'E';
                }
                 
            	totalSem+=sgpa[sem]*creditHour;
            	totalCreditHour+=creditHour;
			
		}
		sgpa[sem]=totalSem/totalCreditHour;
		cout<<"\n\n\t\t\t\t\t sgpa for semester "<<sem+1<<" is : "<<sgpa[sem]<<endl;
		cout<<"\n\t\t\t\t\t Grade in semester "<<sem+1<<" is : "<<grade<<endl;
		cgpa=cgpa+sgpa[sem];
	}
	cgpa=cgpa/numSemester;
	if (cgpa > total_cgpa) {
        cout << "Error: CGPA exceeds " << total_cgpa << "!" << endl;
        cgpa = total_cgpa; 
    }
    cout<<"Gpa after "<<numSemester<<" Semester is : "<<cgpa;
}