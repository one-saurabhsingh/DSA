#include <bits/stdc++.h>
using namespace std;

void printPermutation(string &str, int i) 
//-> agar yaha pass by value krdeta to backracking ka jarurat hi nhi padta.
// line 26 X
{
    // base case
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }
    // swapping
    for (int j = 0; j < str.length(); j++)
    {
        // swap -> isme string byReference pass hota hai jisse j=0
        //                 me last permutation jo "acb" bana tha wo j=1 ka
        //                 starting me abc ko replace krke aa jata hai.

        swap(str[i], str[j]);
        // rec call
        printPermutation(str, i + 1);
        // backtracking -> this is needed to recreate the original string
        //                 i.e abc -> acb then again abc 
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
}