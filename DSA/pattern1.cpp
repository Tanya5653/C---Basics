#include<iostream>
using namespace std;
// void Pattern(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
   // Pattern(n);
    return 0;
}