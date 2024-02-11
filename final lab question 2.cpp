#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size - i ; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    cout << "Array in descending order: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size for array: ";
    cin >> size;

    int* arr = new int[size]; 

    cout << "\nEnter elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> *(arr + i);
    }

    sortArray(arr, size);



    return 0;
}
