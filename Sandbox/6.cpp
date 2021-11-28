#include <bits/stdc++.h>
using namespace std;
int main()
{
    double N, A, B, X, Y;
    cin>>N>>A>>B>>X>>Y;

    if(N>A && N>B){
        if(X>=Y)
            cout<<N-(N*X/100);
        else if(Y>X)
            cout<<N-(N*Y/100);
    }
    else if(N>=A){
        cout<<N-(N*X/100);
    }
    else if(N>=B){
        cout<<N-(N*Y/100);
    }
    else
    {
        cout<<N;
    }
    
    return 0;
}