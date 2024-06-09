#include<bits/stdc++.h>
using namespace std;

void printkmax(int arr[], int n, int k){
        int max;
        for(int i=0; i<n-k; i++){
            max = arr[i];
            for(int j=1; j<k; j++){
                    if(arr[i+j]>max){
                        max = arr[i+j];
                    }
                    
            }
            cout<<max<<" ";
        }
}

int main(){
         int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;
   
      // Function call
    printkmax(arr, N, K);
    return 0;
}