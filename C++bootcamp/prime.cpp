#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i =2; i<n; i++)
    {
        if(n%i==0)
        return false;
    
        
    }
    return true;
}

 int main()
 {
    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"the given number is prime number";
    }
    
    else{
         cout<<"the given number is not prime number";
    }
 }