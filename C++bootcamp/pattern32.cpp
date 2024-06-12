#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = n;
    int col = 2*n;
    for(int i=0; i<2*n; i++)
    {
        int count = 1;
        int temp1 = i;

        for(int j=0; j<col; j++)
        {
            if(j<i){
                cout<<temp1++;
            }
            if(j>=i && j<col-i)
            {
                cout<<i+1;
            }

            if(j>col-i){
                cout<<count--;
            }
        }
        cout<<endl;
    }
}