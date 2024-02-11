#include<iostream>
using namespace std;



int min(int arr[], int size)
{
    int minNum = arr[0];

    for (int index = 1; index < size; index++)
    {
        if (arr[index] < minNum)
        {
            minNum = arr[index]<<index;
        }
    }

    return minNum;
}

int max(int arr[], int size)
{
    int maxNum = arr[0];

    for (int index = 1; index < size; index++)
    {
        if (arr[index] > maxNum)
        {
            maxNum = arr[index];
        }
    }

    return maxNum;
}

int main()
{
    int size;
    cout<<"enter size is ";
    
    cin>>size;
    int arr[size];

    for (int index = 0; index < size; index++)
    {
        cin >> arr[index];
    }

    

    cout << "\nMinimum number: " << min(arr, size) << endl;
    cout << "Maximum number: " << max(arr, size) << endl;

    return 0;
}