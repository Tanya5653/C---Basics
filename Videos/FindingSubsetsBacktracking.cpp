#include<iostream>
#include<vector>
using namespace std;
void FindSubsets(char *input,char *output,int i,int j){
    //base case
    if(input[i]=='\0'){
        output[j] = '\0';
        if(output[0] == '\0'){
            cout<<"NULL";
        }
        cout<<output<<endl;
        return;
    }
    //rec case
    //include the ith letter
    output[j]=input[i];
    FindSubsets(input,output,i+1,j+1);
    //exclude the ith letter
    FindSubsets(input,output,i+1,j);
}
int main(){
    char input[100];
    char output[100];
    cin>>input;
    cout<<"subsets are:"<<endl;
    FindSubsets(input,output,0,0);
    return 0;
}