#include <iostream>
#include <algorithm>
using namespace std;
void binarysearch(int arr[], int start, int end, int key){
    int mid;
    while(start <= end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            int left = mid;
            int right = mid;
            while(arr[left] == key){
                left--;
            }
            left++;
            while(arr[right] == key){
                right++;
            }
            right--;
            cout << "The key is found from index " << left << " to index " << right << "\n";
            cout << "The count of the key is " << (right-left+1) << "\n"; 
            return;
        }
        else if(arr[mid] > key)
            binarysearch(arr, start, mid - 1, key);
        else    
            binarysearch(arr, mid + 1, end, key);
    }
    if(start > end){
        cout << "Key not found!\n";
        return;
    }
}
int main(){
    int n;
    cout << "Enter number of elements of array:   ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:   ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << "The sorted array is:  ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "Enter key to be searched:   ";
    int key;
    cin >> key;
    binarysearch(arr, 0, n - 1, key);
}
