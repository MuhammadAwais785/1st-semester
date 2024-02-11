#include <iostream>
#include <string>
using namespace std;

string full_name;
int marks, marks_mathematic, age, year, intermediate_marks;
bool competition, enrollment;
int total_marks = 500;
int total_marks_mathematic = 100;

void data_collection() {
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, full_name);
    cout << "Enter marks in intermediate: ";
    cin >> marks;
    cout << "Enter marks in mathematics: ";
    cin >> marks_mathematic;
    cout << "Enter age: ";
    cin >> age;
    cout << "Year of passing intermediate exams: ";
    cin >> year;
    cout << "Participation in competition (1 for Yes / 0 for No): ";
    cin >> competition;
    cout << "Enrollment in social services program (1 for Yes / 0 for No): ";
    cin >> enrollment;
}

void Admission_criteria() {
    intermediate_marks = marks + (marks_mathematic / 2);

    if (competition) {
        cout << "Adding 30 marks for participation in competition." << endl;
        total_marks += 30;
    }

    if (enrollment) {
        cout << "Adding 20 marks for enrollment in social services program." << endl;
        total_marks += 20;
    }

    if (year == 2023) {
        cout << "Deducting 5 marks for passing year 2023." << endl;
        total_marks -= 5;
    }

    if (year < 2019) {
        cout << "Deducting 10 marks for passing year before 2019." << endl;
        total_marks -= 10;
    }

    if (age > 24) {
        cout << "Student is not eligible due to age." << endl;
    }
    cout << "Total marks is " << total_marks << endl;
}

void Admission_status() {
    cout << "Admission Status:" << endl;
    if (age <= 24) {
        float forty_percent = 0.4 * total_marks; 
        if (intermediate_marks >= forty_percent) {
            cout << "Congratulations! You are in the top 40% of students." << endl;
        } else {
            cout << "You are not in the top 40% of students." << endl;
        }
    }
}

void display_merit_list() {
    cout << "Displaying Merit List:" << endl;
  
}

int main() {
    data_collection();
    Admission_criteria();
    Admission_status();
    display_merit_list();

    return 0;
}
