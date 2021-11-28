#include <bits/stdc++.h>
using namespace std;

int count_Worry(const vector<bool>& v){
    int cn=0;
    for(auto c : v){
        if(c==false)
            cn++;
    }
    return cn;
}

void operations(vector<bool>& v, int n){
    for(int i=0; i<n; i++){
        string op;
        cin>>op;
        if(op=="WORRY" || op=="QUIET"){
            int ind;
            cin>>ind;
            v[ind]=(op=="QUIET");
        }
        else if(op=="COME"){
            int num;
            cin>>num;
            v.resize(v.size()+num, true);
        }
        else if(op=="WORRY_COUNT")
            cout<<count_Worry(v)<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    vector<bool> nerv;
    operations(nerv, q);
    return 0;
}