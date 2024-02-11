#include <iostream>
#include <string>
using namespace std;

void printStrings(string str1, string str2) 
{
    cout<<"enter string 1 is : ";
    cout<<str1<<endl;
    cout<<"enter string 2 is : ";
    cout<<str2<<endl;
    
}

void stringManipulation(string str1, string str2) {
    if (str1 == str2) {
        cout << "Both strings are  equal." << endl;
        return;
    }
	 else
	  {
        cout << "Strings are not equal." << endl;
        
    }
       
     string smallestString = (str1< str2 ? str1 : str2);
        cout << "Smallest string is : " << smallestString << endl;
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    printStrings(str1, str2);
    stringManipulation(str1, str2);

    return 0;
}


