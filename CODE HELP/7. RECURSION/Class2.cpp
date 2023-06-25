#include <bits/stdc++.h>
using namespace std;

void checkKey(string &str, int i, int &n, char &key)
{
    // base case 
    if(i >= n){
        // key not found
        return ;
    }
    if(str[i] == key){
        cout<<"Found at : "<<i<<endl;
        // return ;
    }

    return checkKey(str, i + 1, n , key);
}

int main(){
    string str = "saurabhumarsingh";
    int n =str.length();

    char key = 's';
    int i =0;
    // int ans =
     checkKey( str, i, n, key);
    // cout<< "Answer is : "<<checkKey<<endl;
}