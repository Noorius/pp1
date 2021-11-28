#include <bits/stdc++.h>
using namespace std;

bool Deg(int n){
    if(n==1)
        return true;
    if(n%2!=0)
        return false;
    return Deg(n/2);
}

int main()
{
    int n;
    cin>>n;
    cout<<(Deg(n)?"Yes":"No");

    return 0;
}