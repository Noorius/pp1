#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    for(int i=s1.size()-1, j=0; i>=0, j<s2.size(); i--){
        if(s1[i]==s2[j]){
            s.erase(i,1);
            j++
        }
    }
    
    return 0;
}