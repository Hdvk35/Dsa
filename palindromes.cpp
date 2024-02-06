#include<bits/stdc++.h>
using namespace std;
string ispalin(string s)

{
    string p = s;
    reverse(p.begin(), p.end());
    if(s==p)
    return "yes";
    else
    return "no";

}
int main()
{
    string s;
    cin>>s;
    cout<<ispalin(s);
}