#include <bits/stdc++.h>
using namespace std;
int main()
{
        vector < pair<string, vector<string> > > m;
        vector < pair<string, vector<string> > >::iterator it;
        int k=0;
        string bustop;
        cin>>bustop;
        if(find(m.begin(),m.end(),bustop)==m.end())
            cout<<"No bus"<<endl;
        else{
            int pos=find();
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


    return 0;
}