#include<iostream>
using namespace std;
int main(){
 char path[1000];
 cin.getline(path,1000);
    int x=0;
    int y=0;
 for(int i=0; path[i] !='\0';i++){
    switch(path[i]){
        case 'N': y++;
        break;
        case 'S' : y--;
        break;
        case 'W' : x--;
        break;
        case 'E' : x++;
        break;
    }
 }
 cout<<"shortest path is"<<x<<","<<y<<endl;
 if(x>=0 and y>=0){
    while(y--){
        cout<<"N";
    }
    while(x--){
        cout<<"E";
    }
 }
 else if(x>=0 and y<=0){
    while(y++){
     cout<<"S";
    }
    while(x--){
    cout<<"E";
    }
    }
else if(x<=0 and y<=0){
    while(x++){
        cout<<"W";
    }
    while(y++){
        cout<<"S";
    }
}
else{
    while(x++){
        cout<<"W";
    }
    while(y--){
        cout<<"N";
    }
}
 return 0;
}