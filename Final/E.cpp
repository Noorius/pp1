#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> shop(n);
    for(auto& i : shop)
        cin>>i;

    int k;
    cin>>k;
    vector<pair<string, string> > list;
    for(int i=0; i<k; i++){
        string pair1, pair2;
        cin>>pair1>>pair2;
        list.push_back(make_pair(pair1,pair2));
    }
        

    string have;
    cin>>have;
    set<string> s;
    set<string>::iterator it1;
    
    for(int i=0; i<k; i++){
        if(list[i].first==have)
            s.insert(list[i].second);
        else if(list[i].second==have)
            s.insert(list[i].first);
    }
    cout<<s.size()<<endl;
    for(it1=s.begin(); it1!=s.end();it1++)
        cout<<*it1<<" ";

    return 0;
}