#include <bits/stdc++.h>
using namespace std;

bool Equality(const vector<int>& v1, const vector<int>& v2){
    for(int i=0; i<v1.size(); i++){
        if(v1[i]==v2[i])
            continue;
        else
            return v1[i]<v2[i];
    }
}

int Sum(const vector<int>& v){
    int sum=0;
    for(const auto& c : v)
        sum+=c;
    return sum;
}

bool comp(const vector<int>& v1, const vector<int>& v2){
    int sum1=Sum(v1);
    int sum2=Sum(v2);
    if(sum1==sum2 && v1.size()==v2.size())
        return Equality(v1,v2);
    else if(sum1==sum2)
        return v1.size()<v2.size();
    else 
        return sum1<sum2;
}

void Fill(vector<int>& v, const int& m){
    int t;
    for(int i=0; i<m; i++){
        cin>>t;
        v.push_back(t);
    }
}

void Out(const vector<int>& v){
    for(const int& c : v)
        cout<<c<<" ";
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int> > v(n);
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        Fill(v[i],m);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<n; i++){
        Out(v[i]);
        cout<<endl;
    }
    return 0;
}