#include<iostream>
using namespace std;

int main() {
    int size, size1, size2, size3;
    cout << "Enter size of row matrix 1: ";
    cin >> size;
    cout << "Enter size of col matrix 1: ";
    cin >> size1;
    cout << "Enter size of row matrix 2: ";
    cin >> size2;
    cout << "Enter size of col matrix 2: ";
    cin >> size3;

    if (size != size2 || size1 != size3) {
        cout << "Matrices cannot be added. Dimensions do not match.";
        return 1;
    }

    int arr[size][size1];
    int arr1[size2][size3];

    cout << "Enter elements for matrix 1:\n";
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size1; c++) {
            cin >> arr[r][c];
        }
    }

    cout << "Enter elements for matrix 2:\n";
    for (int r = 0; r < size2; r++) {
        for (int c = 0; c < size3; c++) {
            cin >> arr1[r][c];
        }
    }

    int result[size][size1];

    cout << "Resultant matrix after addition:\n";
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size1; c++) {
            result[r][c] = arr[r][c] + arr1[r][c];
            cout << result[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}