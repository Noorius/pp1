#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    vector <string> v;
    set <string> mySet;
    map <string, int> m;

    vector <string>::iterator t1;
    set <string>::iterator t2;
    map <string, int>::iterator t3;


    for(int i=0; i<n; i++){
        string j;
        cin>>j;
        v.push_back(j);
        mySet.insert(j);
    }

    for(t2=mySet.begin(); t2!=mySet.end(); t2++) {
        for(t1=v.begin(); t1!=v.end(); t1++){
            if(*t2==*t1)
                cnt++;
        }
        m.insert(make_pair(*t2,cnt));
        cnt=0;
    }
    for(t3=m.begin(); t3!=m.end();t3++) {
        if((*t3).second==3)
            cnt++;
    }
    cout<<cnt;
    return 0;
}