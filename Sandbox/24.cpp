#include <bits/stdc++.h>
#include <stack>
using namespace std;

void Counter(stack<int>& st, int num){
    int sum;
    if(num=='+'){
        sum+=st.top();
        st.pop();
        sum+=st.top();
        st.pop();
        st.push(sum);
    }
    else if(num=='-'){
        sum-=st.top();
        st.pop();
        sum-=st.top();
        st.pop();
        st.push(sum);
    }
    else if(num=='*'){
        sum*=st.top();
        st.pop();
        sum*=st.top();
        st.pop();
        st.push(sum);
    }
    cout<<st.top()<<sum;
}

int main()
{
    stack<int> st;
    int num;
    while(cin>>num){
        if(num==(char)num) //не входит 
            Counter(st,num);
        st.push(num);
    }
}