#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string name, pass;
    map<string,string> mymap;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>name>>pass;
        mymap[name]=pass;
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>name>>pass;
        if(mymap.find(name)!=mymap.end()){
            if(mymap[name]==pass)
                cout<<"correct password"<<endl;
            else    
                cout<<"password error"<<endl;
        }
        else{
            cout<<"login error"<<endl;
        }
    }

    return 0;
}