#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std; 

void insertionSort(int arr[], int n){ 
	int i, key, j; 
	for (i = 1; i < n; i++){ 
		key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
}void printArray(int arr[], int n){ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << "\n";
	cout<<endl;
}
int main(){ 
	int n;
	clock_t time_req;
	
	cout<<"Enter the number of elements:\t"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Array before sorting:\n";
	for(int i=0;i<n;i++){
		arr[i] = rand();
	}
	printArray(arr, n);
	//start
	auto start = high_resolution_clock::now();
	insertionSort(arr, n);
	auto stop = high_resolution_clock::now();
	//stop
	auto duration = duration_cast<microseconds>(stop - start);
	cout<<"Sorted Array:\n";
	printArray(arr, n);
	cout<<"Time taken: "<<duration.count()<<" microseconds.\n";
	return 0; 
}
