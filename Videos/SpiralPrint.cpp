#include<iostream>
using namespace std;
void SpiralPrint(int arr[][10],int n, int m){
 int startRow=0;
 int endRow=n-1;
 int startCol=0;
 int endCol=m-1;

 while(startCol<= endCol and startRow<=endRow){

    for(int col=startCol;col<=endCol;col++){
        cout<<arr[startRow][col]<<" ";
    }
    for(int row=startRow+1;row<=endRow;row++){
        cout<<arr[row][endCol]<<" ";
    }
    for(int col=endCol-1;col>=startCol;col--){
        if(startRow==endRow){
            break;
        }
        cout<<arr[endRow][col]<<" ";
    }
    for(int row=endRow-1;row>=startRow;row--){
        if(startCol==endCol){
            break;
        }
        cout<<arr[row][startCol]<<" ";
    }
  startRow++;
  endRow--;
  startCol++;
  endCol--;
 }
}
int main(){
    int arr[][10] ={ {1,2,3,4},
                     {12,13,14,5},
                     {11,16,15,6},
                     {10,9,8,7}};
    int n=4;
    int m=4;
    SpiralPrint(arr,n,m);
    return 0;              
}