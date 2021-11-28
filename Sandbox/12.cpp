#include <bits/stdc++.h>
using namespace std;
int Factorial(int N){
    if(N==1 || N<=0)
        return 1;
    return N*Factorial(N-1);
}

int main()
{
    int N;
    cin>>N;
    cout<<Factorial(N);

    return 0;
}