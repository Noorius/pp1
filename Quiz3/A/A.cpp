#include <bits/stdc++.h>
using namespace std;

bool foo(int N, int J)
{
    if(N<2)
        return false;
    if(J<N) {
        if(N%J==0)
            return false;
    }
    if(J==N)
        return true;
    return foo(N,J+1);
}

int Ans(int J, int CNT, int NUM){
    for(int i=0; CNT<=NUM; i++){
        if(foo(i,J)==true){
            CNT++;
            if(CNT==NUM){
                cout<<i;
            }
        }
    }
}

int main()
{
    int number, cnt=0, j=2;
    cin>>number;
    Ans(j,cnt,number);

    return 0;
}