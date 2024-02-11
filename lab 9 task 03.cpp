#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

void insert(int arr[], int &size) {
   int n;
    cout << "Enter the size of array: ";
    cin >> n;

   cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[size++];
    }
}

void modify(int arr[], int size) {
    int index;
    cout << "Enter the index to modify (0 to " << size - 1 << "): ";
   
    cin >> index;

    if (index >= 0 && index < size) {
       cout << "Enter the new value: ";
        cin >> arr[index];
        cout << "Modification successful.\n";
    } else {
        cout << "Invalid index. Modification failed.\n";
    }
}

void mdisplay(const int arr[], int &size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    
int array1[MAX_SIZE];
    int size1 = 0;
   

    cout << "Insert data into Array 1:\n";
    insert(array1, size1);

    

    cout << "\nDisplay Array 1:\n";
    display(array1, size1);

   

    cout << "\nModify data in Array 1:\n";
    modify(array1, size1);

    

    cout << "\nDisplay Modified Array 1:\n";
    display(array1, size1);

   

    return 0;
}