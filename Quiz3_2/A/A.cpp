#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int, int> m;
    map <int, int>::iterator it;
    vector <int> v;

    int n,t,q;

    cin>>n;
    for(int i=0; i<n; i++){
        int j;
        cin>>j;
        if(m.find(j)!=m.end())
            m[j]++;
        else if(m.find(j)==m.end())
            m[j]=1;    
    }
        
    cin>>t;
    for(int i=0; i<t; i++){
        int q;
        cin>>q;
        if(m.find(q)!=m.end())
            cout<<m[q]<<endl;
        else if(m.find(q)==m.end())
            cout<<0<<endl;  
        
    }

    /* for(it=m.begin(); it!=m.end(); it++)
        cout<<(*it).first<<' '<<(*it).second<<endl; */

    return 0;
}