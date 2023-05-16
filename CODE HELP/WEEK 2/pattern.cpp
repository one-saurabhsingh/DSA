#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"No. of rows ?\n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int y =0; y < n-i-1; y++)
        {
          cout<<" ";
        }
        for (int y = 0; y<i+1; y++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
    
}