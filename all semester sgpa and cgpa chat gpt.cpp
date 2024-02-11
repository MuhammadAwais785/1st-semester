#include<iostream>
using namespace std;

int main() {
    const int numSemester = 8;
    const int numSubject = 4;

    int arr[numSemester][numSubject];
    double sgpa[numSemester];
    const int total_cgpa = 4;
    double cgpa = 0.0;

    for (int sem = 0; sem < numSemester; sem++) {
        double totalSem = 0.0;
        int totalCreditHour = 0;
        char grade = ' ';

        cout << "\nEnter the marks for semester " << sem + 1 << endl;
        for (int sub = 0; sub < numSubject; sub++) {
            int creditHour = 0;
            cout << "Enter marks for subject " << sub + 1 << " in semester " << sem + 1 << " : ";
            cin >> arr[sem][sub];

            cout << "Enter credit hours for subject " << sub + 1 << " in semester " << sem + 1 << " : ";
            cin >> creditHour;

            if (arr[sem][sub] >= 80 && arr[sem][sub] <= 100) {
                sgpa[sem] += 4.0 * creditHour;
                grade = 'A';
            } else if (arr[sem][sub] >= 65 && arr[sem][sub] <= 79) {
                sgpa[sem] += 3.0 * creditHour;
                grade = 'B';
            } else if (arr[sem][sub] >= 50 && arr[sem][sub] <= 64) {
                sgpa[sem] += 2.0 * creditHour;
                grade = 'C';
            } else if (arr[sem][sub] >= 40 && arr[sem][sub] <= 49) {
                sgpa[sem] += 1.0 * creditHour;
                grade = 'D';
            } else {
                sgpa[sem] += 0.0;
                grade = 'E';
            }

            totalCreditHour += creditHour;
        }

        sgpa[sem] /= totalCreditHour; // Calculate SGPA for the semester
        cout << "\nSGPA for semester " << sem + 1 << " is: " << sgpa[sem] << endl;
        cout << "Grade in semester " << sem + 1 << " is: " << grade << endl;

        cgpa += sgpa[sem]; // Accumulate SGPA for CGPA calculation
    }

    cgpa /= numSemester; // Calculate CGPA

    if (cgpa > total_cgpa) {
        cout << "Error: CGPA exceeds " << total_cgpa << "!" << endl;
        cgpa = total_cgpa;
    }

    cout << "CGPA after " << numSemester << " semesters is: " << cgpa << endl;

    return 0;
}
