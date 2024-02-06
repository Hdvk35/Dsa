#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"capacity of v ->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity of v ->"<<v.capacity()<<endl;
    cout<<"size of v->"<<v.size()<<endl;

    v.push_back(2);
    cout<<"capacity of v->"<<v.capacity()<<endl;
    cout<<"size of v->"<<v.size()<<endl;

    v.push_back(3);
    cout<<"capacity of v->"<<v.capacity()<<endl;
    cout<<"size of v->"<<v.size()<<endl;

}