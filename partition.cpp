#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int n, int sum)
{

    if (sum == 0)
        return 1;
    else if (n == 0 )
        return 0;
    if(arr[n-1]>sum){
        return 0;
    }
    return partition(arr, n-1, sum)||partition (arr, n-1, sum-arr[n-1]);
}
int main(){
int sum = 0,n,arr[n];
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the elements :"<<endl;
for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    sum += arr[i];
    }
    if(sum%2==0 && partition(arr,n,sum/2)){

            cout<<"Can be partitioned into two subsets of equal sum"<<endl;

    }
    else{
        cout<<"Cannot be partitioned into two subsets of equal sum"<<endl;
    }
return 0;
}
