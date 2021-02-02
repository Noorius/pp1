#include <bits/stdc++.h>
using namespace std;
int fact(int N)
{
    if(0==N)
        return 1;
    return N*fact(N-1);
}

int main()
{
    int n, i=1;
    cin>>n;
    cout<<fact(n);
}
