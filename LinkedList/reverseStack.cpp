#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "bharat";
    stack<char> st;

    for(int i=0; i<str.length(); i++)
    {
        st.push(str[i]);
    }

    string ans ="";

    while(!st.empty()){
        ans.push_back(st.top());

        st.pop();
    }

    cout<<"answer is "<<ans<<endl;


}