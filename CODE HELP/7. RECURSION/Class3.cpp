#include <bits/stdc++.h>
using namespace std;

// bool checkSorted(vector<int> &arr, int &n, int i)
// {
//     if (i == n - 1)
//     {
//         return true;
//     }
//     if (arr[i + 1] < arr[i])
//     {
//         return false;
//     }

//     return checkSorted(arr, n, i + 1);
// }

// int main()
// {
//     vector<int> v;
//     int n;
//     cout << "How many elements you want in vector ?" << endl;
//     cin >> n;
//     int a;
//     for (int j = 0; j < n; j++)
//     {
//         cin >> a;
//         v.push_back(a);
//     }

//     int i = 0;
//     bool isSorted = checkSorted(v, n, i);

//     if (isSorted)
//     {
//         cout << "Array is Sorted" << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted" << endl;
//     }
// }

// INCLUDE EXCLUDE
void printSubsequences(string str, string output, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    } 
    // exclude
    printSubsequences(str, output, i + 1);

    // include
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1);
}

int main()
{
    string str = "abc";
    string output = "";

    int i = 0;

    printSubsequences(str, output, i);
}