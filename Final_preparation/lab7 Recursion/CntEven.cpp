#include <bits/stdc++.h>
using namespace std;

int EvenCnt(const string& s, int i, int& cnt){
    if(i==s.size())
        return cnt;
    if((s[i]-'0')%2==0)
        ++cnt;
    return EvenCnt(s,i+1,cnt);
}

int main()
{
    string s;
    int i=0,cnt=0;
    cin>>s;
    cout<<EvenCnt(s,i,cnt);

    return 0;
}