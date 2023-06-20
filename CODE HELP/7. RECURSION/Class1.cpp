#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    cout << "Function is called for n: " << n << endl;
    // int ans = n*factorial(n-1);
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter value of n " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Answer is : " << ans << endl;

    return 0;
}