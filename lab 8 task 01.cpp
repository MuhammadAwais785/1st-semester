#include <iostream>
using namespace std;
int main() {
     int numEmployees = 6;
    
int hoursWorked[numEmployees];
int salary;
    
    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter hours worked for Employee "<<i+1 <<" : ";
        cin >> hoursWorked[i];
       
    }

    
    
    cout << "\nHours worked by each employee salary is \n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i+1 << ": " << hoursWorked[i] << " hours = " << 500*hoursWorked[i]<<"\n"<<endl;
         
    }
    

    return 0;
}
