#include<iostream>
using namespace std;
bool CanPlace(int board[][20],int n , int x,int y){
    //column
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }
    //left diagonal
    int i=x;
    int j=y;
    while(i>=0 and j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    //right diagonal
    i=x;
    j=y;
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}
void PrintBoard(int board[][20],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int SolveNQueen(int n,int board[][20],int i){
    //base case
    if(i==n){
        //print board
       PrintBoard(board,n);
        return 1;
    }
    //rec case
    int ways=0;
    for(int j=0;j<n;j++){
        //whether can place or not
        if(CanPlace(board,n,i,j)){
            board[i][j]=1;
            ways += SolveNQueen(n,board,i+1);
             //backtrack
            board[i][j]=0;
        }
    }
    return ways;
}
int main(){
    int board[20][20] ={0};
    int n;
    cin>>n;
    cout<<"WAYS "<<SolveNQueen(n,board,0);
    return 0;
}