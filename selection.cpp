#include <iostream>
#include<chrono>
using namespace std;
using namespace std::chrono; 

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){ 
	int i, j, small; 
	for (i = 0; i < n-1; i++){ 
		small = i;
		for (j = i+1; j < n; j++) 
			if (arr[j] < arr[small]) 
				small = j; 
		swap(&arr[small], &arr[i]); 
	} 
} 

void printArray(int arr[], int size){ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << "\n"; 
	cout << endl; 
}

int main(){ 
	int arr[100], n;
	clock_t time_req;
	cout<<"Enter the number of elements:\t";
	cin>>n;
	for(int i=0;i<n;i++){
		arr[i] = rand();
	}
	cout<<"The elements in the array (before sorting) are:\n";
	printArray(arr, n);
	
	auto start = high_resolution_clock::now();
	
	selectionSort(arr, n); 
	
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	
	cout <<"The elements in the array (after sorting) are:\n";
	printArray(arr, n);
	cout<<"Time required for sorting is:   "<<duration.count()<<" microseconds!!"<<endl;
	return 0; 
}
