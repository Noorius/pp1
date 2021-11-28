#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(i%2==0)
            sum-=(s[i]-'0');
        else
            sum+=(s[i]-'0');
    }
    if(sum==0)
        cout<<"YES";
    else    
        cout<<"NO";

    return 0;
}