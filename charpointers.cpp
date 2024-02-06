#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;
    cout<<*c<<endl;

    char a = 'z';
    char *p = &a;
    cout<<p<<endl;
    cout<<&ch[0]<<endl;
    cout<<&ch<<endl;
    cout<<sizeof(ch)<<endl;
    
}