#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int res = 1;
    for(int i =0; i<b; i++)
    {
        res = res*a;
    }
    cout<<res;
}