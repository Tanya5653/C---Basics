#include<iostream>
using namespace std;
void Permute(string & s,int l ,int r){
    //base case
    if(l==r){
        cout<< s <<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            //rec case
            Permute(s,l+1,r);
            //backtracking
            swap(s[l],s[i]);
        }
    }
}
int main(){
    string str = "AB";
    int n = str.size();
    Permute(str,0,n-1);
    return 0;
}