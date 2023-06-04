#include <bits/stdc++.h>
using namespace std;

// TO FIND LENGTH OF STRING

// int getLength(char arr[])
// {
//     int length = 0;
//     int i = 0;

//     while (arr[i] != '\0')
//     {
//         length++;
//         i++;
//     }
//     return length;
// }

// int reverseCharArray(char arr[])
// {
//     int i = 0;
//     int n = strlen(arr);
//     int j = n - 1;

//     while (i <= j)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

void replaceSpaces(char arr[ ]){
    int i =0 ;
    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
        
    }
    
}

int main()
{
    char arr[100];
    cout << "Write your name :" << endl;
    cin.getline(arr, 100);

    cout << "So, initially name is : " << arr << endl;

    // reverseCharArray(arr);
    // cout << "After reversal, the name is : " << arr << endl;

    replaceSpaces(arr);
    cout << "After replacement, name is : "<< arr << endl;
}