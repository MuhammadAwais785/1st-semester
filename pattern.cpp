#include <iostream>
using namespace std;

void printPattern() {
    int n = 5;
    for (int i = n; i > 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = i; j <= n; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = i; j <= n; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    // Call the function to print the pattern
    printPattern();
    return 0;
}
