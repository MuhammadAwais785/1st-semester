#include<iostream>
using namespace std;

void display(int arr[], int size)
{
    int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;

    for (int index = 0; index < size; index++)
    {
        

        if (arr[index] > 0)
           {
			 positive++;
		}
        if (arr[index] < 0)
          
		  {
			  negative++;
		}

        if (arr[index] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (arr[index] == 0)
           {
			 zero++;
		}
    }

    
    cout << "\nNumber of positive elements: " << positive << endl;
	cout << "Number of negative elements: " << negative << endl;
    cout << "Number of odd elements: " << odd << endl;
    cout << "Number of even elements: " << even << endl;
    cout << "Number of zero elements: " << zero << endl;
}

int main()
{
    int size;
	cout<<"enter size is : ";
	cin>>size; 
    int arr[size];

    cout << "Enter ELEMENT OF ARRAY:" << endl;

    for (int index = 0; index < size; index++)
    {
        cin >> arr[index];
    }

    display(arr, size);

    return 0;
}