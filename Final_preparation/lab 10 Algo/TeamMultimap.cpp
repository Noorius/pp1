#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multimap<pair<string,int>,pair<string,int> > m;
    multimap<pair<string,int>,pair<string,int> >::iterator it;
    for(int i=0; i<n; i++){
        string name1,name2;
        int score1,score2;
        cin>>name1>>score1>>name2>>score2;
        it=m.find({name1,score1});
        if(it!=m.end()){
            if((*it).second.first==name2 && (*it).second.second==score2)
                continue;
            else
                m.insert(make_pair(make_pair(name1,score1),make_pair(name2,score2)));
        }
        else
            m.insert(make_pair(make_pair(name1,score1),make_pair(name2,score2)));   
    }
    for(const auto& c : m)
        cout<<c.first.first<<" and "<<c.second.first<<" "<<c.first.second+c.second.second<<endl;


    return 0;
}