// Reverse a string

#include <bits/stdc++.h>
using namespace std;

int main(){
    string xyz = "Birla";
// putting stack into string

    stack<char> s; // remember to put CHAR NOT INT !
    for (int i = 0; i < xyz.length(); i++)
    {
        s.push(xyz[i]);
    }
    // reversing the string
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
    
}