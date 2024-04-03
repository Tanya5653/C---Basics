#include<iostream>
#include<list>
using namespace std;
 class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V=v;
        l = new list<int> [V];
    }

    void addEdge(int i,int j,bool Undir=true){
        l[i].push_back(j);
        if(Undir){
            l[j].push_back(i);
        }
    }
    void AdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
 };
 int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);

    g.AdjList();
    return 0;
 }