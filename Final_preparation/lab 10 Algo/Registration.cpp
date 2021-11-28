#include <bits/stdc++.h>
using namespace std;

void Count(map<string,double>& m,const int& sum){
    for(auto& c : m)
        c.second=(double)(c.second*(double)100)/(double)sum;
}

void Fill(map<string,double>& m, const int& obl,int& sum){
    string name;
    double num;
    for(int i=0; i<obl; i++){
        cin>>name>>num;
        m[name]+=num;
        sum+=num;
    }
}

int main()
{
    int n, sum=0;
    cin>>n;
    map<string,double> m;
    for(int i=0; i<n; i++){
        int obl;
        cin>>obl;
        Fill(m,obl,sum);
    }
    Count(m,sum);
    for(const auto& c : m)
        cout<<c.first<<" "<<c.second<<endl;
    return 0;
}