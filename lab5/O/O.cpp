#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char max=s[0];
    for(int i=1; i<s.size(); i++){
        if(max<s[i]){
            max=s[i];
        }
    }
    cout<<max;


    return 0;
}