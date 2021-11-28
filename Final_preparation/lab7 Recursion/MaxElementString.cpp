#include <bits/stdc++.h>
using namespace std;

void maxi(string s, int i,char max){
    if(i==s.size()){
        cout<<max;
        return ;
    }
    if(s[i]>max)
        max=s[i];
    maxi(s,i+1,max);
}

int main()
{
    string s;
    char max=CHAR_MIN;
    int i=0;
    cin>>s;
    maxi(s,i,max);

    return 0;
}