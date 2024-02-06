#include<iostream>
using namespace std;


void print(int *p)
{
    cout<<"print->"<<p<<endl;
    cout<<"print -> "<<*p<<endl;
}

void update(int *p)
{
    p = p+1;
    cout<<"update -> "<<p<<endl;
    cout<<"update -> "<<*p<<endl;
}
int main()
{
    int value =5;
    int *p = &value;

    print(p);
    update(p);


  return 0;
}
