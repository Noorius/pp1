#include <bits/stdc++.h>
using namespace std;

long long sumi(int N, int SUM)
{
    cin>>N;
    SUM+=N;
    if(N==0)
        return SUM;
    sumi(N, SUM);
}

int main()
{
    long long n, sum=0;
    
    cout<<sumi(n,sum);

    return 0;
}