#include <bits/stdc++.h>
using namespace std;

int Fill(int a[])
{
    int max=-10000000;
    for(int i=0; i<3; i++){
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    } 
    return max;    
}

int main()
{
    int a[10];
    cout<<Fill(a);
    return 0;
}