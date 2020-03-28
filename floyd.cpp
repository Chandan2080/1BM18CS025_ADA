#include<bits/stdc++.h>
using namespace std;
void floyd(int n,int a[][20]);
int main(){
   int a[20][20],i,j,n;  
    cout<<"Enter the number of vertices of the directed/undirected graph \n"; 
    cin>>n; 
	cout<<"\nEnter the adjacency matrix of the graph (Enter 10000 as the weight if there is no edge between the vertices)\n"; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
	       cin>>a[i][j];
        }
    } 
	floyd(n,a);
	return 0;
}
void floyd(int n, int a[][20]){
    int i,j,k,d[20][20];
    for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
			d[i][j] = a[i][j];
        }
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
                d[i][j]=min(d[i][j],(d[i][k]+d[k][j]));
			}
		}
	}
    cout<<"\nThe distance matrix of shortest paths of the given graph is\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
            cout<<d[i][j]<<"     "; 
        } 
        cout<<endl;
    }  
}
