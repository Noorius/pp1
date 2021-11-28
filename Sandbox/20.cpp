#include <bits/stdc++.h>
using namespace std;

void count_Worry(const vector<bool>& q, vector<int>& cnt){
    int cn=0;
    for(auto c : q){
        if(c==false)
            cn++;
    }
    cnt.push_back(cn);
}

vector<int> operations(vector<bool>& q, int n, vector<int>& cnt) {
    string s;
    int num;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s=="WORRY"){
            cin>>num;
            if(num>=0)
                q[num]=false;
        }
        else if(s=="QUIET"){
            cin>>num;
            if(num>=0)
                q[num]=true;
        }
        else if(s=="COME"){
            cin>>num;
            q.resize(q.size()+num, true);
        }
        else if(s=="WORRY_COUNT")
            count_Worry(q,cnt);
    }
    return cnt;
}

void printVector(const vector<int>& v){
    for(auto c : v)
        cout<<c<<endl;
}

int main()
{
    int Q;
    cin>>Q;
    vector<bool> q;
    vector<int> cnt;

    printVector(operations(q,Q,cnt));



    return 0;
}