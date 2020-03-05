#include<iostream>
using namespace std;
void insert_sort(int fi[],int n){
    int i, value, j;
    for(i=1;i<n;i++){
        value = fi[i];
        j = i;
        while(j>0 && fi[j-1] > value){
            fi[j] = fi[j-1];
            j--;
        }
        fi[j] = value;
    }
}
int main(){
    int n, i, value, j;
    cout<<"Enter the number of meetings:  ";
    cin>>n;
    int si[n], fi[n], arr[n], arr1[n];
    cout<<"Enter start time and finish time of meetings:  ";
    for(i=0;i<n;i++){
        cin>>si[i]>>fi[i];
    }
    for(i=0;i<n;i++) arr[i]=fi[i];
    insert_sort(fi,n);
    cout<<"Sorted array is (finish time):"<<endl;
    for(i=0;i<n;i++)  cout<<fi[i]<<" ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(fi[i]==arr[j] && arr[j]!=-1){
                arr[j]=-1;
                break;
            }
        }
        arr1[i]=si[j];
    }
    cout<<endl;
    i = 0;
    j = 0;
    while(i<n){
        cout<<"Meeting no: "<<i+1<<endl;
        cout<<"Pair "<<arr1[i]<<", "<<fi[i]<<endl;
        value = fi[i];
        while(arr1[j]<value && j<n)
        {
            j++;
        }
        i = j;
    }
    return 0;
}
