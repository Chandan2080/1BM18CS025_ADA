#include<iostream>
using namespace std;
int adj[100][100],n,key[100],visited[100],cost=0;
void minCost(int key[],int visited[]){
     visited[1]=1;
    int index1=1,index2;
for(int count=1;count<n;count++){
        int min=999999999;
        for(int i=1;i<=n;i++){
            if(visited[i]!=1 && adj[index1][i]<key[i]){

                key[i]=adj[index1][i];
            }
        }
        for(int j=1;j<=n;j++){
        if(visited[j]!=1 && key[j]<min){
            min=key[j];
            index2=j;
        }
    }
    cost+=key[index2];
    visited[index2]=1;
   cout<<index1<<" -> "<<index2<<endl;

   index1=index2;
}
}
int main(){

    cout<<"enter the num of vertices:"<<endl;
    cin>>n;

    cout<<"enter the adjacency matrix (enter 9999 for infinity) :"<<endl;
    for(int i=1;i<=n;i++){
         visited[i]=0;
         key[i]=999;
            for(int j=1;j<=n;j++){
            cin>>adj[i][j];
        }
    }

    cout<<"Minimum spanning tree is (selection of vertices) :"<<endl;
    minCost(key,visited);
    cout<<"The cost of MST is: "<< cost<<endl;
    return 0;
}
