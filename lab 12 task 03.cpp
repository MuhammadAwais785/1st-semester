#include <iostream>
#include <string>
using namespace std;

void inputDetails( char firstName[],  char lastName[], int &id, int &age, double &weight) {
    cout << "Enter student's first name: ";
    cin >> firstName;

    cout << "Enter student's last name: ";
    cin >> lastName;

    cout << "Enter student's ID: ";
    cin >> id;

    cout << "Enter student's age: ";
    cin >> age;

    cout << "Enter student's weight: ";
    cin >> weight;
}

void printDetails(const char firstName[], const char lastName[], int &id, int &age, double &weight) {
    char fullName[100];
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "\nStudent Details:\n";
    cout << "Full Name: " << fullName << endl;
    cout << "ID: " << id << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
}

int main()
 {
    char firstName[50], lastName[50];
    int id, age;
    double weight;

    inputDetails(firstName, lastName, id, age, weight);
    printDetails(firstName, lastName, id, age, weight);

    return 0;
}