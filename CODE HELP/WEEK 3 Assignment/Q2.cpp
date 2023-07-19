// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //To sort the array by DNF method
    
//     int l=0;
//     int h;
//     h = n-1;
    
//     for(int i=0;i<n;i++){
//         if(arr[l]<0){
//             l++;
//         }
//         else if(arr[h]>0){
//             h--;
//         }
//         else{
//             swap(arr[l], arr[h]);
//         }
//     }
// for (int i = 0; i < n; i++)
// {
//     cout<< arr[i]<< " ";
// }
// cout<< endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }    
};

void solve(int arr[], int n){
    int l =0, h;
    h = n-1;
    while(l<=h)
    if(arr[l] <0){
        l++;
    }
    else if (arr[h]>0)
    {
        h--;
    }
    else{
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
    printArr(arr, n);
};

int main(){
    int n;
    cout<<"How many elements you want in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Write elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    solve(arr, n);
    return 0;
}