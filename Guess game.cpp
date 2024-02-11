#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int balance = 0;
    int choice;

    do {
        cout << "1. Win Lottery\n2. Roll a Dice\n3. Guess the Number\n4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                int lottery = rand() % 90 + 10; 
                int guess;
                cout << "Enter your two-digit number: ";
                cin >> guess;
                if(guess == lottery) {
                    cout << "You won 10,000!\n";
                    balance += 10000;
                } else if((guess / 10 == lottery % 10) && (guess % 10 == lottery / 10)) {
                    cout << "You won 5,000!\n";
                    balance += 5000;
                    
                } else if((guess / 10 == lottery / 10) || (guess / 10 == lottery % 10) || (guess % 10 == lottery / 10) || (guess % 10 == lottery % 10)) {
                    cout << "You won 3,000!\n";
                    balance += 3000;
                } else {
                    cout << "You lost 1,000!\n";
                    balance -= 1000;
                }
                break;
            }
            case 2: {
                int dice1 = rand() % 7;
                int dice2 = rand() % 7;

                if(dice1 == dice2) {
                    cout << "You won 10,000!\n";
                    balance += 10000;
                } else if((dice1 % 2 == 0 && dice2 % 2 == 0) || (dice1 % 2 != 0 && dice2 % 2 != 0)) {
                    cout << "You won 5,000!\n";
                    balance += 5000;
                } else {
                    cout << "You lost 1,000!\n";
                    balance -= 1000;
                }
                break;
            }
            case 3: {
                int number = rand() % 101;
                int guess;
                do {
                    cout << "Guess the number (0-100): ";
                    cin >> guess;
                    if(guess < number) {
                        cout << "Too low!\n";
                    } else if(guess > number) {
                        cout << "Too high!\n";
                    }
                    balance -= 1000;
                } while(guess != number);
                cout << "You won 10,000!\n";
                balance += 10000;
                break;
            }
            case 4:
                cout << "You quit the game.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
        cout << "Your balance is: " << balance << "\n";
    } while(choice != 4);

    return 0;
}
