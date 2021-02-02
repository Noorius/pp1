#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, int> m;
    multiset <int> set;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        int p;
        cin>>s>>p;
        m.insert(pair<string, int>(s));
        set.insert(p);
    }
    map<string, int>::iterator it;
    multiset<int>::iterator it1;
    for(it = m.begin(), it1=set.begin(); it != m.end(); ++it, ++it1){
        (*it).second=(*it1);
    }
    for(it = m.begin(); it != m.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}