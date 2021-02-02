#include <bits/stdc++.h>
using namespace std;

int f(int L, int M, int R, int N, int K)
{
    
    if(N==1)
        return L;
    if(N==2)
        return M;
    R=M+L;
    L=M;
    if(K==N)
        return R;
    else 
        return f(L, M=R, R, N, K+1);
    
}

int main()
{
    int l=0, m=1, r, n, k=3;
    cin>>n;
    cout<<f(l,m,r,n,k);


    return 0;
}
