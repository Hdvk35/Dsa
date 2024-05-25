#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[], int n, int k){
    int max_sum = INT32_MIN;
    int current_sum =0;
    int i,j;

    for( i=0; i<n-k+1; i++);
    {
        for( j=0; j<k; j++)
        {
             current_sum += arr[i+j];
        }
        max_sum = max(current_sum, max_sum);
    }

    return max_sum;

    
}

int main(){


}