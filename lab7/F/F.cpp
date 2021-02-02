#include <bits/stdc++.h>
using namespace std;
int even(string N, int NUM, int CNT)
{
    if(NUM<=N.size()-1) {
        if((N[NUM]-'0')%2==0)
            CNT++;
        return even(N,++NUM, CNT);
    }
    return CNT;
}
int main()
{
    string n;
    int cnt=0, num=0;
    cin>>n;
    cout<<even(n,num,cnt);

    return 0;
}