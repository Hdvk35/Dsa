#include<bits/stdc++.h>
using namespace std;
int main(){
    int num =10;
    int count = 0;
    while(num){
        count +=  num & 1;
        num>>=1;
    }
    cout<<count;
}