#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "enter the number of elements for array" << endl;

    int n;
    cin >> n;
    int arr[n];

    // INput
    cout << "Write the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // SELECTION SORT
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             swap(arr[j], arr[i]);
    //         }
    //     }
    // }

    // // BUBBLE SORT
    // // i = number of rounds

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    // INSERTION SORT

    

    // OUTput
    cout << "The sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}