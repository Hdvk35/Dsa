#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rev =0;
    int num;
    cin>>num;

    int n=num;
    while(num!=0)
    {
        int digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }

    if(n==rev)
    cout<<"the given number is palindrome"<<endl;
    else
    cout<<"the given number is not palindrome"<<endl;
}