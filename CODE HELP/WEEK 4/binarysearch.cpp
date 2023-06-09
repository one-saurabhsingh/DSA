#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size, int target){
    int start =0;
    int end = size -1;


    while (start <= end)
    {
            int mid = start/2 + end/2; 
        int element = arr[mid];

        if (element == target)
        {
         return mid;
        }
        else if (target<element)
        {
            // search in left
            end = mid -1;
        }
        else{
            // search in right
             start = mid +1 ;
        }
    }
    // element not found
    return -1;


}

int main(){
    int arr[] = {3 ,4, 7, 8, 9 ,11, 12, 13, 17};
    int size = 9;
    int target = 9;
    

    int indexOftarget = binarySearch(arr, size, target);
if(indexOftarget == -1){
    cout<< "target not found"<< endl;
} 
else {
    cout<< "target found at "<< indexOftarget <<"."<< endl;
}
    return 0;
}



// Find square-root element 

// int findsqrt(int n){
//     int s = 0;
//     int e = n;
//     int ans = -1;

//     int mid = s + (e-s)/2;

//     while (s <=e)
//     {
//         if( mid*mid == n){
//          mid == ans; //   return mid;
//         }
//         else if (mid*mid > n)
//         {
//             e = mid - 1; // left search
//         }
//         else {
//             ans = mid;  // storing the ans
//             s = mid +1; // right search
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }


// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     int ans = findsqrt(n);
//     // cout<< "Ans is " << ans << endl;

//     int precision;
//     cout<<"Enter the number of floating digits in precision"<< endl;
//     cin>>precision;

//     double step = 0.1;
//     double finalAns = ans;

//     for(int i =0; i<precision; i++){
//         for (double j = finalAns; j*j <= n; j = j + step)
//         {
//             finalAns = j;
//         }
//         step = step/10;
        
//     }
// cout<< "Final ANSWER is "<< finalAns <<endl;
//     return 0;
// }

// Binary Search in 2D array

// bool binarySearch(int arr[][4], int rows, int cols, int target){
// int s =0;
// int e = rows*cols -1;


// while (s <= e)
// {   int mid = s + (e-s)/2;
//     int rowIndex = mid/cols;
//     int colIndex = mid%cols;

//     if(arr[rowIndex][colIndex] == target){
//         return true;
//     }
//     if(arr[rowIndex][colIndex] < target){
//         s = mid +1;
//     }
//     else{
//         e = mid -1;
//     }
// }
// return false;

// }

// int main(){
//     int arr[5][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20} };
//     int rows =5;
//     int cols =4;

//     int target =9;

//     bool ans = binarySearch(arr, rows,cols,target);

//     if(ans){
//         cout<< "Found "<<endl;
//     }
//     else{
//         cout<< "Not Found "<< endl;
//     }
// }