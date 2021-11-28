#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,min=INT_MAX,area=INT_MIN;
    cin>>n;
    stack<int> st;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t<min)
            min=t;
        if(min*(i+1)>area)
            area=min*(i+1);
        if(t>st.top()){
            
        }
        st.push(t);
    }


    return 0;
}