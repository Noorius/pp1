#include <bits/stdc++.h>
using namespace std;

void busSchedule(vector<pair<string, vector<string> > >& m, string& s, const int& q){
    vector <pair<string, vector<string> > >::iterator it=m.begin();
    if(s=="NEW_BUS"){
        string bus, stop;
        int numStop, j=0;
        cin>>bus>>numStop;
        for(int i=0; i<numStop; i++){
            cin>>stop;
            m[j].second.push_back(stop);
        } 
        j++;
    }  
    else if(s=="BUSES_FOR_STOP"){
        int n=0;
        string stop;
        cin>>stop;
        for(it=m.begin(); it!=m.end(); it++){
            if(find((*it).second.begin(),(*it).second.end(), stop)!=(*it).second.end()){
                cout<<(*it).first<<" ";
                n++;
            }
        }
        if(n==0)
            cout<<"No stop"<<endl;
        else
            cout<<endl;
    }
    else if(s=="STOPS_FOR_BUS"){
        int k=0;
        string bustop;
        cin>>bustop;
        if(find(m.begin(),m.end(),bustop)==m.end())
            cout<<"No bus"<<endl;
        else{
            int pos=find()
            for(int i=0; i<m.size(); i++){
                cout<<"Stop "<<m[i].first<<": ";
                for(it=m.begin(); it!=m.end(); it++){
                    if((*it).first!=bustop){
                        if(find((*it).second.begin(),(*it).second.end(),m[bustop][i])!=(*it).second.end()){
                            cout<<(*it).first<<" ";
                            k++;
                        }
                    }
                }
                if(k==0)
                    cout<<"no interchange"<<endl;
                else
                    cout<<endl;
                k=0;
            }
        }
    }
    else if(s=="ALL_BUSES"){
        if(m.empty())
            cout<<"No buses "<<endl;
        else {
            for(it=m.begin(); it!= m.end(); it++){
                cout<<"Bus "<<(*it).first<<": ";
                for(int i = 0; i<(*it).second.size(); i++){
                    cout<<(*it).second[i]<<" ";
                }
                cout<<endl;
            }
        }    
    }
}


int main()
{
    int Q;
    vector < pair<string, vector<string> > > m;
    cin>>Q;
    for(int i = 0; i < Q; i++){
        string command;
        cin>>command;
        busSchedule(m, command,Q);
    }
    return 0;
}