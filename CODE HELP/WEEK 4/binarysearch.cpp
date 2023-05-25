#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int size, int target){
    int start =0;
    int end = size -1;


    while (start <= end)
    {
            int mid = (start + end) /2; 
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
    int arr[]={0,2,7,8,10,27,28};
    int size = 7;
    int target = 2;
    

    int indexOftarget = binarySearch(arr, size, target);
if(indexOftarget == -1){
    cout<< "target not found"<< endl;
} 
else {
    cout<< "target found at "<< indexOftarget <<"."<< endl;
}
    return 0;
}