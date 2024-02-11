#include <iostream>
using namespace std;
int main() {
    const int arraySize = 10;
    int numbers[arraySize];
    int count = 0;

    
     cout << "Enter 10 integers is equal to:\n";
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
    }

   
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] >= 10) {
            count++;
        }
    }

    
    cout << "Number of integers greater than or equal to 10: " << count << endl;

    return 0;
}
	

