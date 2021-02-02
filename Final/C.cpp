#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    int n, clr;;
    cin>>n;

    cin>>clr;
    st.push(clr);

    for(int i=0; i<n-1; i++){
        cin>>clr;
        for(int i=0; i<=st.size(); i++){
            if(st.top()<=clr)
                st.pop();
        }
        st.push(clr);
    }
    cout<<st.size();

    return 0;
}