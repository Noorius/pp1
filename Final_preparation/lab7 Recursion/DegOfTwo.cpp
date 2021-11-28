#include <bits/stdc++.h>
using namespace std;

int Deg2(int n,int d,long long two){
    if(n==0)
        return 1;
    if(d==n)
        return two;
    Deg2(n,d+1,two*2);
}

int main()
{
    int n,d=1,two=2;
    cin>>n;
    cout<<Deg2(n,d,two);

    return 0;
}