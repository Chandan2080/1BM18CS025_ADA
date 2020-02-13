#include <iostream>
#include<ctime>
 
using namespace std; 

void swap(int *xp, int *yp) { 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
}

void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
		for (j = 0; j < n-i-1; j++) 
			if (arr[j] > arr[j+1]) 
				swap(&arr[j], &arr[j+1]); 
}

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{
	int n, arr[100];
	//double start,end;
	//double timetaken;
	cout<<"Enter the size of the array:   ";
	cin>>n;
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//time_t current_time = time(NULL);
	//start = (double)current_time;
	//cout << "Start time = " << current_time << endl;
	clock_t begin, end;
	double time_spent;
	begin = clock();
	bubbleSort(arr, n);
	end = clock(); 
	cout<<"Sorted array: \n"; 
	printArray(arr, n); 
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	//current_time = time(NULL);
	//end = (double)current_time;
	//timetaken = end - start;
	//cout << current_time << " seconds has passed since 00:00:00 GMT, Jan 1, 1970";
	//cout<<endl<<timetaken;
	cout<<endl<<(double)time_spent;
	return 0; 
}
