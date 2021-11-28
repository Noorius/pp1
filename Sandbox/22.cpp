#include <bits/stdc++.h>
using namespace std;

vector<vector<string> > month_Change(const vector<vector<string> >& v, int num){
    vector<vector<string> > next(num);
    for(int i=0; i<v.size(); i++){
        next[i]=v[i];
    }
    if(v.size()>next.size())
        next.insert(end(next), begin(v)+next.size(), end(v));
    return next;
}

void operations(vector<vector<string> >& v, int n){
    for(int i=0,j=0; i<n; i++){
        int day;
        string s,task;
        cin>>s;
        if(s=="ADD"){
            cin>>day>>task;
            v[day-1].push_back(task);
        }
        else if(s=="DUMP"){
            cin>>day;
            for(auto c : v[day-1])
                cout<<c<<" ";
        }
        else if(s=="NEXT"){
            if(j>11)
                j=0;
            if(j%2==0)
                v=month_Change(v,31);
            else if(j==1)
                v=month_Change(v,28);
            else if(j%2!=0)
                v=month_Change(v,30);
            j++;
        }
            
    }
}

int main()
{
    int q;
    cin>>q;
    vector<vector<string> > v;
    operations(v,q);


    return 0;
}