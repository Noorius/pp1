#include <bits/stdc++.h>
using namespace std;

void operations(map<string,string>& m, string s){
    if(s=="CHANGE_CAPITAL"){
        string newCap;
        cin>>s>>newCap;
        if(m.find(s)==m.end()){
            m[s]=newCap;
            cout<<"Introduce new country "<<s<<" with capital "<<newCap<<endl;
        }
        else if(m.find(s)!=m.end()){
            if(newCap==m[s])
                cout<<"Country "<<s<<" hasn't changed its capital"<<endl;
            else if(newCap!=m[s]){
                string oldCap=m[s];
                m[s]=newCap;
                cout<<"Country "<<s<<" has changed its capital from "<<oldCap<<" to "<<newCap<<endl;
            }
                
        }
    }
    else if(s=="RENAME"){
        string oldName, newName;
        cin>>oldName>>newName;
        if((oldName==newName) || (m.find(oldName)==m.end()) || (m.find(newName)!=m.end()) || (""==m[oldName]))
            cout<<"Incorrect rename, skip"<<endl;
        else{
            m[newName]=m[oldName];
            m.erase(oldName);
            cout<<"Country "<<oldName<<" with capital "<<m[newName]<<" has been renamed to "<<newName<<endl;
        }
    }
    else if(s=="ABOUT"){
        string country;
        cin>>country;
        if(m.find(country)==m.end())
            cout<<"Country "<<country<<" doesn't exist"<<endl;
        else if((m.find(country)!=m.end()) && (""!=m[country]))
            cout<<"Country "<<country<<" has capital "<<m[country]<<endl;
    }
    else if(s=="DUMP"){
        if(m.empty())
            cout<<"There are no countries in the world"<<endl;
        else
            for(const auto& c : m)
                cout<<c.first<<"/"<<c.second<<" "<<endl;
    }
}

int main()
{
    map<string, string> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string command;
        cin>>command;
        operations(m, command);
    }
    return 0;
}