#include <bits/stdc++.h>
using namespace std;

int sumi(string S, int NUM, int N){
    if(NUM==N)
        return 0;
    return (S[NUM]-'0')+sumi(S,++NUM,N);
}

int main()
{
    string s;
    cin>>s;
    int n=s.size(), sum=0, num=0;
    cout<<sumi(s,num,n);
    return 0;
}

