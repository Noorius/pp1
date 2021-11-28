#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    while(A>0 && B>0){
        if(A>=B)
            A%=B;
        else if(B>A)
            B%=A;
    }
    cout<<A+B;
    return 0;
}