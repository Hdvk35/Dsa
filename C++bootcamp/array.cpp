#include<iostream>
#include<array>

using namespace std;
int main() {
    array<int,4> a = {1,2,3,4};
    int size = a.size();

    for(int i =0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<size;

    cout<<"element at second position is: "<<a.at(2)<<endl;
    cout<<"first element->"<<a.front()<<endl;
    cout<<"last element->"<<a.back()<<endl;
    cout<<"empty or not empty"<<a.empty()<<endl;
}