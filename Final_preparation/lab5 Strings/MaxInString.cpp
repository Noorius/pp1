#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int max=INT_MIN;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>max)
            max=s[i];
    }
    cout<<(char)max;


    return 0;
}