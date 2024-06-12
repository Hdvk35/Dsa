#include<bits/stdc++.h>
using namespace std;
int main(){
    // int num =10;
    // int count = 0;
    // while(num){
    //     count +=  num & 1;
    //     num>>=1;
    // }
    // cout<<count;


    int n;
    cin>>n;
    int m = n*n;
    int sum = 0;
    int digit;
    while(m!=0){
        digit =  m%10;
        sum += digit;
        m /= 10;
    }
    if(sum==n)
    {
        cout<<"the number is a neon number"<<endl;
    }
    else
    {
        cout<<"the number is not neon number"<<endl;
    }
    
}