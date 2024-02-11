#include <iostream>
using namespace std;

int main() {
    const int numSemesters = 8;
    const int numSubjects = 5;
    int arr[numSemesters][numSubjects];
    double sgpa[numSemesters];
    double cgpa = 0.0;

    const int total_sgpa = 4;
    const int total_cgpa = 4;
    
    char grade;

    for (int sem = 0; sem < numSemesters; sem++) {
        double semTotal = 0.0;
        int totalCreditHours = 0;

        cout << "\n Enter marks for semester " << sem + 1 << endl;
        for (int subj = 0; subj < numSubjects; subj++) {
            int creditHour = 0;

            cout << "\n Enter marks for subject " << subj + 1 << " in semester " << sem + 1 << ": ";
            cin >> arr[sem][subj];
            cout << "\n Enter Credit Hour for subject " << subj + 1 << " in semester " << sem + 1 << ": ";
            cin >> creditHour;

            
            
			if (arr[sem][subj] >= 80&&arr[sem][subj]<=100) {
                sgpa[sem] = 4.0;
                grade = 'A';
            } else if (arr[sem][subj] >= 65 && arr[sem][subj] <= 79) {
                sgpa[sem] = 3.0;
                grade = 'B';
            } else if (arr[sem][subj] >= 50 && arr[sem][subj] <= 64) {
                sgpa[sem] = 2.0;
                grade = 'C';
            } else if (arr[sem][subj] >= 40 && arr[sem][subj] <= 49) {
                sgpa[sem] = 1.0;
                grade = 'D';
            } else {
                sgpa[sem] = 0.0;
                grade = 'E';
            }

            
            semTotal += sgpa[sem] * creditHour;
            totalCreditHours += creditHour;
        }

        
        sgpa[sem] = semTotal / totalCreditHours; 

        cout << "\n\n\t\t\t\t SGPA for semester " << sem + 1 << ": " << sgpa[sem] << endl;
        cgpa += sgpa[sem];
    }

    
   cgpa=cgpa/ numSemesters;

    

    cout << "CGPA after " << numSemesters << " semesters: " << cgpa << endl;

    return 0;
}
