#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin>>s;
    for(auto c : s){
        if(c=='(')
            st.push(c);
        else
        {
            if(st.empty()){
                cout<<"NO";
                return 0;
            }
            else
                st.pop();
        }
    }
    cout<<(st.empty() ? "YES" : "NO");
    return 0;
}