#include <bits/stdc++.h>
using namespace std;

int S(){
    int n;
    cin>>n;
    if(n==0)
        return 0;
    return n+S();
}

int main()
{
    cout<<S();

    return 0;
}