#include<bits/stdc++.h>
using namespace std;

#define d = 256;

void search(char txt[], char pat[], int q){
    int m = strlen(txt);
    int n = strlen(pat);
    int t =0;
    int p =0;
    int h =1;

    for(int i= 0; i<m-1; i++)
    {
        h = (h * d) %q;
    }

    for(int i=0; i<m; i++)
    {
        
    }
}