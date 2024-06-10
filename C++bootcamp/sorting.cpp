#include<bits/stdc++.h>
using namespace std;

// selection sort time complexity = O(n^2) space complexity = O(1)
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex])
            minindex = j;
            }
            swap(arr[i], arr[minindex]);
            }

}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        }
}


void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}


int main()
{
    
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

        bubbleSort(arr,n);
     cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}