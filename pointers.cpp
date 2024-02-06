#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 5;
    // cout<<num<<endl;
    // cout<<"address of num"<<&num<<endl;

    // int *i = &num;
    // cout<<i<<endl;
    // cout<<*i<<endl;
    // // int *j = &num;
    // // cout<<j<<endl;

    // int *i =0;
    // cout<<i<<endl;
    
    // int num =5;
    // i = &num;

    // cout<<i<<endl;
    // cout<<*i<<endl;

    // int num =5;
    // int a = num;
    // a++;

    // cout<<num<<endl;

    // int *p = &num;
    //  a = *p;
    // cout<<a<<endl;

    // int *q = p;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int arr[10] = {2,4,6,8,5,7,0};
    // for(int i =0; i<10; i++)
    // {
    //     cout<<&arr[i]<<endl;
    // }
    
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;

    // int i =3;
    // cout<<i[arr]<<endl;

    // int temp[10];
    // int a = sizeof(temp);
    // cout<<a<<endl;
    // int b = sizeof(*temp);
    // cout<<b<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;

     int arr[10];
    /* arr = arr +1; */
    int *ptr = &arr[0];
    cout<<ptr<<endl;

    ptr = ptr +1;
    cout<<ptr<<endl;


}