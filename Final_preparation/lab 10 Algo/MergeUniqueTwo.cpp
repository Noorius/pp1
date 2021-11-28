#include <bits/stdc++.h>
using namespace std;

void Fill(vector<int>& v, const int& n){
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
}

void Unique(vector<int>& v){
    vector<int>::iterator it;
    it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> first;
    vector<int> second;

    Fill(first,n);
    Fill(second,m);
    Unique(first);
    Unique(second);

    vector<int> merge;
    for(int i=0; i<(min(first.size(),second.size())); i++){
        merge.push_back(first[i]);
        merge.push_back(second[i]);
    }
    if(first.size()>second.size())
        merge.push_back(first.back());
    else if(first.size()<second.size())
        merge.push_back(second.back());

    Unique(merge);
    vector<int>::iterator it;
    for(it=merge.begin(); it!=merge.end(); it++)
        cout<<*it<<" ";
    
    return 0;
}