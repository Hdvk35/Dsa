#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a ={1,2,3,4};
    int size  = a.size();
    cout<<size<<endl;

    cout<<"element at index 2: "<<a.at(2)<<endl;
    cout<<"element at front:"<<a.front()<<endl;
    cout<<"element at back:"<<a.back()<<endl;

}