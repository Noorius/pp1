#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    stack<int> st;
    string op;
    while(cin>>op){
        if(op=="+"){
            int f=st.top();
            st.pop();
            int t=st.top();
            st.pop();
            st.push(f+t);
        }
        else if(op=="-"){
            int f=st.top();
            st.pop();
            int t=st.top();
            st.pop();
            st.push(t-f);
        }
        else if(op=="*"){
            int f=st.top();
            st.pop();
            int t=st.top();
            st.pop();
            st.push(f*t);
        }
        else{
            int d = stoi(op);
            st.push(d);
        }
            
    }
    cout<<st.top();

    return 0;
}