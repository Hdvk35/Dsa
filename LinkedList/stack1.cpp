#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<int> st;

    st.push(18);
    st.push(10);

    st.pop();

    cout<<st.top()<<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }


}