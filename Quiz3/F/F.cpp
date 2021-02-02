#include <bits/stdc++.h>
using namespace std;

bool foo(long long N, long long J)
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

void Ans(long long J, long long NUM, vector<long long> &v){
    for(long long i=0; i<=NUM;i++){
        if(foo(i,J)==true){
            v.push_back(i);
        } 
    }
}

void Prime(vector<long long> v, long long NUM, long long i){
    if(i==v.size() || NUM==1)
        return;
    if(NUM%v[i]==0){ 
        NUM=NUM/v[i];
        cout<<v[i]<<" ";
    }
    if(NUM%v[i]!=0)
        i++;
    Prime(v,NUM,i);
}

int main()
{
    long long number, j=2, i=0;
    cin>>number;
    vector <long long> v;

    Ans(j,number,v);
    Prime(v,number, i);

    return 0;
}