#include <bits/stdc++.h>
using namespace std;

vector<int> add(vector<int>& v, int n){
    int i=0,j;
    while(i<n){
        cin>>j;
        v.push_back(j);
        ++i;
    }
    return v;
}

int ar_Mean(const vector<int>& v){
    int res=0;
    for(auto c : v)
        res+=c;
    return res/v.size();
}

vector<int> new_Add(const vector<int>& v){
    vector<int> res;
    for(int i=0; i<v.size(); i++){
        if(v[i]>(ar_Mean(v)))
            res.push_back(i);
    }
    return res;
}

void printVector(const vector<int>& vector){
    cout<<vector.size()<<endl;
    for(auto num : vector)
        cout<<num<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    printVector(new_Add(add(v,n)));

    return 0;
}