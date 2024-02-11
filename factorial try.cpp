#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {0};

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            arr[r][c] = (r + 1) * (c + 1);
        }
    }

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;  // Add a newline after each row
    }

    return 0;
}
