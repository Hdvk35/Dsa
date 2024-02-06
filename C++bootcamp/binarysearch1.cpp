#include<iostream>
using namespace std;
 
 int firstocc(int arr[], int n, int key)
 {
    int s = 0;
    int e = n-1;
    int m = s+ (e-s)/2;
     int ans = -1;
    while(s<=e)
    {
        if(arr[m]==key)
        {
            ans =  m;
            e = m-1;
        }
        else if(arr[m] < key)
        {
            m = s+1;
        }
        else
        {
            m = e-1;
        }
        m= s + (e-s)/2;
    }
    return ans;
 }

 int lastocc(int arr[], int n, int key)
 {
    int s = 0;
    int e = n-1;
    int m = s+ (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[m]==key)
        {
            ans= m;
            s = m+1;
        }
        else if(arr[m] < key)
         
            m = s+1;
        }
        else
        {
            m = e-1;
        }
        m= s + (e-s)/2;
    }
    return ans;
 }

 int main()
 {
    int even[6] = {2,4,4,4,6,8};
    int key = 4;
    cout<<"element at first index"<<firstocc(even, 6 , 4);
    cout<<"element at last index"<<lastocc(even, 6, 4);
 }