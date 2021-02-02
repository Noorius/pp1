#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> a;
    vector<string> v;
    vector<string>::iterator it;
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s;
        if(a.find(s)==a.end())
            a.insert(s);
        else if(a.find(s)!=a.end()) {
            it=find(v.begin(), v.end(),s);
            if(it==v.end())
                v.push_back(s);
            else
                continue;
        }
    }
    if(v.size()==0){
        cout<<"Understandable, have a great day";
        return 0;
    }

    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }


    return 0;
}