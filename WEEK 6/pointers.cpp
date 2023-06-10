#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[4] = {5, 8, 11, 20};
    // int *p = arr;
    // int *q = arr + 1;

    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr[0] << endl;
    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;
    // cout << *(p)+1 << endl;
    // cout << *(p)+2 << endl;
    // cout << *(q)+3 << endl;
    // cout << *(q+4) << endl;

    char name[10] = "Sher Bano";
    char *cptr = &name[0];

    cout<<name<<endl;
    cout << &name << endl;
    cout << *(name+3) << endl;
    cout << cptr << endl;
    cout << &cptr << endl;
    cout << *(cptr +3) << endl;
    cout << cptr +2 << endl;
    cout << *cptr << endl;
    cout << cptr + 8 << endl;

    return 0;
}