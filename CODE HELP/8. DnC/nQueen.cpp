#include <bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<char>> &board, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    // check krna chahte hai 
    // queen rakh sakta hu ki nhi
    // at current cell
    int i = row;
    int j = col;
    // check row
    while(j>=0){
if(board[i][j] == 'Q'){
    return false;
}
j--;
    }
    //check upper left diagonal
    i =row;
    j = col;
    while (i >= 0 && j >= 0)
    {
     if(board[i][j]== 'Q'){
        return false;
     }
     i--;
     j--;
    }

    // check lower left diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
     if (board[i][j] == 'Q')
     {
        return false;
     }
     i++;
     j--;
    }

    // kahin pr bhi queen nhi mili
    // matlab ye position safe hai
    return true;
}

    void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if(col >= n){
        printSolution(board, n);
        return;
    }

    // 1 case solve krna
    for (int row = 0; row < n; row++)
    {
        if(isSafe(row,col, board, n)){
            // rakh do
            board[row][col] = 'Q';
            //recursion solve karega ab
            solve(board, col +1, n);
            //backtracking
            board[row][col] = '-';
        }
    }
}

    int main()
{
    int n =4;
    vector<vector<char>>board(n, vector<char>(n,'-'));
    int col =0;

    // 0 -> means empty cell
    // 1 -> means queen is there
    solve(board, col, n);
 
    return 0;
}