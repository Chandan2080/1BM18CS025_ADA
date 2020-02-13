#include<iostream>

using namespace std;

int firstoccurence(int arr[], int begin, int end, int key){
	int m, start = -1;
	while(begin <= end){
		m = (begin + end) / 2;
		if(arr[m] < key)
			begin = m+1;
		if(arr[m] > key)
			end = m-1;
		if(arr[m] == key){
			start = m;
			end = m-1;
		}
	}
	return start;
}
int lastoccurence(int arr[],int begin,int end,int key){
	int m,endindex=-1;
	while(begin<=end)
	{
		m=(begin+end)/2;
		if(arr[m]<key)
			begin=m+1;
	 	if(arr[m]>key)
			end=m-1;
		if(arr[m]==key){
			endindex=m;
			begin=m+1;
		}
	}
	return endindex;
}
int main(){
	int n, j, arr[50], key, l, r, count, fo, lo;
	cout << "Enter no of elements" << endl;
	cin >> n;
	cout << "Enter elements in array in sorted order" << endl;
	for(j=0;j<n;j++)
		cin>>arr[j];
	cout << "Enter key element:  " << endl;
	cin>>key;
	l = 0;
	r = n - 1;
	fo = firstoccurence(arr, l, r, key);
	lo = lastoccurence(arr, l, r, key);
	if((fo==-1) || (lo==-1)){
		cout << "Element not found!!" << endl;
	}
	else{
		cout << "First occurence:  "<< fo << endl;
		cout << "Last occurence:  "<< lo << endl;
	}
	count = (lo - fo) + 1;
	cout << "Total occurences:  " << count << endl;	
	return 0;
}
