#include <iostream>
#include <string>
using namespace std;

string stored_username;
string stored_password;
double total_amount = 1000;

bool signup() {
    cout << "\t\t\t================================ Sign up Portal ====================================\n";
    cout << "Enter username without spaces: ";
    cin >> stored_username;

    if (stored_username.find(" ") != string::npos) {
        cout << "Username cannot contain spaces.\n";
        return false;
    }

    cout << "Enter at least four-digit password: ";
    cin >> stored_password;

    if (stored_password.length() < 4) {
        cout << "Password must contain at least four digits.\n";
        cout << "Sign up failed.\n";
        return false;
    }

    cout << "====== SIGN UP SUCCESSFUL ======\n";

    return true;
}

bool sign_In() {
    cout << "\t\t\t\t\t\t````````````Sign In Portal````````````\n";
    int attempt = 0;
    cout << "\n If username or password is incorrect, you have three attempts, otherwise failed\n";
    string entered_username, entered_password;
    while (attempt < 3) {
        cout << "Enter your username: ";
        cin >> entered_username;
        cout << "Enter your password: ";
        cin >> entered_password;

        if (entered_username == stored_username && entered_password == stored_password) {
            cout << "Login successful.\n";
            return true;
        } else {
            attempt++;
            cout << "Username or password is incorrect. Remaining attempts: " << 3 - attempt << endl;
        }
    }

    cout << "Exceeded login attempts. Login failed.\n";
    return false;
}

void menu() {
    cout << "\n Menu\n ";
    cout << "1. Add cash\n";
    cout << "2. Withdraw cash\n";
    cout << "3. Account information\n";
    cout << "4. Change password\n";
    cout << "5. Log out\n";
}

void add_cash() {
    double amount;
    cout << "\nEnter amount to be added: ";
    cin >> amount;
    total_amount += amount;
    cout << amount << "  Added to your account. Your current balance is: " << total_amount << endl;
}

void withdraw() {
    double amount;
    cout << "\nWithdraw amount: ";
    cin >> amount;
    if (amount > total_amount) {
        cout << "Insufficient balance.\n";
    } else {
        total_amount -= amount;
        cout << amount << " has been withdrawn from your account. Your remaining balance is " << total_amount << endl;
    }
}

void account_info() {
    cout << "\nUsername: " << stored_username << endl;
    cout << "Current balance: " << total_amount << endl;
}

void change_password() {
    string current_password;
    cout << "\nEnter current password: ";
    cin >> current_password;
    if (current_password == stored_password) {
        string new_password;
        cout << "\nPassword must contain at least four digits." << endl;
        cout << "Enter new password: ";
        cin >> new_password;
        if (new_password.length() < 4) {
            cout << "\nInvalid password\n";
        } else {
            stored_password = new_password;
            cout << "\nYour password has been updated.\n";
        }
    } else {
        cout << "\nInvalid password\n";
    }
}

int main() {
    if (signup()) {
        bool log_in = sign_In();
        while (log_in) {
            menu();
            int choice;
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    add_cash();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    account_info();
                    break;
                case 4:
                    change_password();
                    break;
                case 5:
                    cout << "Logging out. Goodbye.\n";
                    log_in = false;
                    break;
                default:
                    cout << "Invalid choice. Enter correct choice.\n";
            }
        }
    }

    return 0;
}
