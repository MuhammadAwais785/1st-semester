#include <iostream>
using namespace std;
int main() {
    const int arraySize = 20;
    int numbers[arraySize];
    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;

    
    cout << "Enter 20 integers:\n";
    for (int i = 0; i < arraySize; ++i) {
        cin >> numbers[i];
    }

    
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        }

        if (numbers[i] % 2 == 0 && numbers[i] != 0) {
            evenCount++;
        } else if (numbers[i] % 2 != 0) {
            oddCount++;
        }

        if (numbers[i] == 0) {
            zeroCount++;
        }
    }

    
    std::cout << "Number of positive numbers: " << positiveCount << std::endl;
    std::cout << "Number of negative numbers: " << negativeCount << std::endl;
    std::cout << "Number of odd numbers: " << oddCount << std::endl;
    std::cout << "Number of even numbers: " << evenCount << std::endl;
    std::cout << "Number of zeros: " << zeroCount << std::endl;

    return 0;
}
