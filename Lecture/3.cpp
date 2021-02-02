#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(3);

    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;


    return 0;
}