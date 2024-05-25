// #include<bits/stdc++.h>
// using namespace std;


// int subarray(int arr[], int n, int sum){
//     int start =0;
//     int current_sum = arr[0];

//     for(int i=0; i<=n; i++)
//     {
//             while(current_sum > sum && start < i-1){
//                 current_sum = current_sum - arr[start];
//                 start++;
//             }

//             if(current_sum == sum){
//                 cout<<"sum found between the indexs: " <<start<<"and "<< i-1<<endl;
//                 return 1;
//             }
//             if(i<n){
//                 current_sum = current_sum + arr[i];
//             }
//     }
//     cout<<"no subarray found"<<endl;
//     return 0;
// }

// int main()
// {
//     int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 23;
//     subarray(arr, n, sum);
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++){
            cout<<"*"<<" ";
        } 
        cout<<endl;
    }
}