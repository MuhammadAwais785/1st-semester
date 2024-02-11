#include <iostream>
using namespace std;

void inputDetails(string &firstName, string &lastName, int &id, int &age, double &weight) {
    cout << "Enter student's first name: ";
    getline(cin, firstName);

    cout << "Enter student's last name: ";
    getline(cin, lastName);

    cout << "Enter student's ID: ";
    cin >> id;
	

    cout << "Enter student's age: ";
    cin >> age;

    cout << "Enter student's weight: ";
    cin >> weight;
	
}

void printDetails(const string &firstName, const string &lastName, int id, int age, double weight) {
    cout << "\nStudent Details:\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "ID: " << id << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
}

int main()
 {
    string firstName, lastName;
    int id, age;
    double weight;

    inputDetails(firstName, lastName, id, age, weight);
    printDetails(firstName, lastName, id, age, weight);

    return 0;
}