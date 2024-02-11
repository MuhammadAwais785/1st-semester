#include <iostream>
#include <string>

using namespace std;

string username = "";
string password = "";
double total_balance = 1000; // Initial balance

// SIGN UP
void signUp() {
    while (true) {
        cout << "Enter a username (without spaces): ";
        getline(cin, username);
        if (username.find(' ') == string::npos) {
            break;
        } else {
            cout << "Username should not contain spaces. Please try again." << endl;
        }
    }

    while (true) {
        cout << "Enter a 4-digit password: ";
        getline(cin, password);
        if (password.length() == 4 && password.find_first_not_of("0123456789") == string::npos) {
            break;
        } else {
            cout << "Password should be a 4-digit number. Please try again." << endl;
        }
    }

    cout << "Sign up successful!" << endl;
    cout << "Your username is: " << username << endl;
    cout << "Your password is: " << password << endl;
    cout << "Your initial balance is: " << total_balance << endl;
}

// LOGIN
bool login() {
    int attempts = 3;
    while (attempts > 0) {
        string inputUsername, inputPassword;
        cout << "Enter your username: ";
        getline(cin, inputUsername);
        cout << "Enter your password: ";
        getline(cin, inputPassword);

        if (inputUsername == username && inputPassword == password) {
            cout << "Login Successful!" << endl;
            return true;
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Login failed. " << attempts << " attempts remaining. Please try again." << endl;
            } else {
                cout << "Maximum attempts reached. Exiting program." << endl;
                return false;
            }
        }
    }
    return false;
}

// MENU
void menu() {
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add Cash" << endl;
        cout << "2. Withdraw Cash" << endl;
        cout << "3. Account Information" << endl;
        cout << "4. Change Password" << endl;
        cout << "5. Logout" << endl;

        int choice;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); // Clear newline from input buffer

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter the amount to add: ";
                cin >> amount;
                total_balance += amount;
                cout << "Added " << amount << " to your account. Your total balance is now " << total_balance << endl;
                break;
            }
            case 2: {
                double amount;
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > total_balance) {
                    cout << "Insufficient Amount." << endl;
                } else {
                    total_balance -= amount;
                    cout << "Withdrew " << amount << " from your account. Your total balance is now " << total_balance << endl;
                }
                break;
            }
            case 3:
                cout << "Account Information:" << endl;
                cout << "Username: " << username << endl;
                cout << "Total Balance: " << total_balance << endl;
                break;
            case 4: {
                string currentPassword, newPassword;
                cout << "Enter your current password: ";
                getline(cin, currentPassword);
                if (currentPassword == password) {
                    cout << "Enter your new 4-digit password: ";
                    getline(cin, newPassword);
                    if (newPassword.length() == 4 && newPassword.find_first_not_of("0123456789") == string::npos) {
                        password = newPassword;
                        cout << "Password changed successfully." << endl;
                    } else {
                        cout << "New password should be a 4-digit number." << endl;
                    }
                } else {
                    cout << "Incorrect password. Please try again." << endl;
                }
                break;
            }
            case 5:
                cout << "Logged out." << endl;
                return;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }
}

int main() {
    signUp();
    if (login()) {
        menu();
    }
    return 0;
}
