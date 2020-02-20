#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;
int main(){
	int n, arr[100], j, i, temp;
	clock_t time_req;
	cout<<"Enter the number of elements:\t"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		arr[i] = rand();
	}
	auto start = high_resolution_clock::now();
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout<<"Sorted array is:\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<endl;
	cout<<"Time required for sorting is:   "<<duration.count()<<" micros"<<endl;
	return 0;
}
