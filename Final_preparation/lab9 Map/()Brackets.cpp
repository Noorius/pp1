#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')
            st.push(s[i]);
        else{
            if(st.empty()){
                cout<<"NO";
                return 0;
            }
            st.pop();
        }
            
    }
    if(st.empty())
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}