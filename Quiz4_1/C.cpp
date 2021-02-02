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

int Ans(int J, int NUM, int CNT, vector<int>& v){
    for(int i=2; CNT<=NUM; i++){
        if(foo(i,J)){
            v.push_back(i);
        }
    }
}

int main()
{
    int index, j=2, cnt=0;
    vector<int> v;
    cin>>index;
    Ans(j,index,cnt,v);

    return 0;
}