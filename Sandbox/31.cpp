#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector < pair<string, vector<string> > > m;
    vector < pair<string, vector<string> > >::iterator it;
    string bustop;
    cin>>bustop;
    m.push_back(make_pair("32",{"Tolstopaltsevo","Marushkino","Vnukovo"}));
    m.push_back(make_pair("32K",{"Tolstopaltsevo", "Marushkino", "Vnukovo", "Peredelkino", "Solntsevo", "Skolkovo"}));

    //if(find(m.begin(),m.end(),bustop)==m.end())
        cout<<"No bus"<<endl;
    


    return 0;
}