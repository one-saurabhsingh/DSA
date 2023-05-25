#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //To sort the array by DNF method
    
    int l=0;
    int h;
    h = n-1;
    
    for(int i=0;i<n;i++){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
for (int i = 0; i < n; i++)
{
    cout<< arr[i]<< " ";
}
cout<< endl;
    return 0;
}