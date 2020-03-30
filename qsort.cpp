#include <bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std; 



void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
} 


int partition (int arr[], int low, int high){
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++){ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot){ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

void printArray(int arr[], int size){ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << "   "; 
	cout << endl; 
} 

int main() 
{ 
	int arr[100],n,i;
	clock_t time_req;
	cout<<"Enter the array size";
	cin>>n;
	for(i=0;i<n;i++){
	    arr[i] = rand();
	}
	cout<<"Before sorting:\n";
	printArray(arr, n); 
	
	
	
	
	auto start = high_resolution_clock::now();
	quickSort(arr, 0, n - 1); 
	auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
	
	
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	cout<<"Time taken: "<<duration.count()<<" microseconds.\n";
	return 0; 
}
