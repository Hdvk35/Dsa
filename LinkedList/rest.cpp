#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "harshit";

    stack<char> s;

    for(int i=0; i<str.length(); i++){
        
        s.push(str[i]);
    }

    string ans = "";

    while(!s.empty()){
        // char ch = s.top();
        ans.push_back(s.top());

        s.pop();
    }

    cout<<"answer is   "<<ans<<endl;
}