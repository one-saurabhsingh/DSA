#include <iostream>
using namespace std;

int findkey(int arr[][3], int rows, int cols, int key){
for (int i = 0; i < rows; i++)
{
    for (int j = 0; i < cols; j++)
    {
        if(arr[i][j] == key)
        {
         return true;
        }
        
    }
    
}
return false;
}

void printRowWiseSum(int arr[][3], int rows, int cols){
    cout<<"Printing row wise sum"<<endl;
    for (int i = 0; i < rows; i++){
    int sum =  0;
    
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
        
    }
    
}


int main(){
    int arr[3][3];
int rows=3,cols=3;
    int brr[3][3] = { 
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}};
    
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<< brr[j][i]<< " "; //column wise print kiye hai
                    }
                    cout<<endl;
    }
    int key =5;
printRowWiseSum(brr, rows, cols);
findkey(brr, rows, cols, key);

if (findkey)
{
    cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}