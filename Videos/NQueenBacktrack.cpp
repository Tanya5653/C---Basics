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
    while(i>=0 & j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    //right diagonal
    i=x;
    j=y;
    while(i>=0 & j>=0){
        if(board[i][i]==1){
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
bool SolveNQueen(int n,int board[][20],int i){
    //base case
    if(i==n){
        //print board
        PrintBoard(board,n);
        return true;
    }
    //rec case
    for(int j=0;j<n;j++){
        //whether can place or not
        if(CanPlace(board,n,i,j)){
            board[i][j]=1;
            bool suucess = SolveNQueen(n,board,i+1);
            if(suucess){
                return true;
            }
            //backtrack
            board[i][j]=0;
        }
    }
    return false;
}
int main(){
    int board[20][20] ={0};
    int n;
    cin>>n;
    SolveNQueen(n,board,0);
    return 0;
}