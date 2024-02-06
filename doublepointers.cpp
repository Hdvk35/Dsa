#include<iostream>
using namespace std;

void update(int **p)
{
    // p = p+1;

    // *p = *p + 1;
    **p = **p + 1;
}
int main(){
    int value =5;
    int *p = &value;
    int **q = &p;

    // cout<<value<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<**q<<endl;
    // cout<<&q<<endl;
    // cout<<&p<<endl;
 
    cout<< "before update value ->"<<value<<endl;
    cout<<"before update p->"<<p<<endl;
    cout<<"before update q->"<<q<<endl;

    update(q);

    cout<<"after update value ->"<<value<<endl;
    cout<<"after update p ->"<<p<<endl;
    cout<<"after update q ->"<<q<<endl;




}