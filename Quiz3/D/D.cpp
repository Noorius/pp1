#include <bits/stdc++.h>
using namespace std;

bool revise(string S1, string S2, int i, int j){
    if((S1[i]=='b' || S1[i]=='B' || S1[i]=='p' || S1[i]=='P')&&(S2[j]=='b' || S2[j]=='B' || S2[j]=='p' || S2[j]=='P'))
        return true;
    if((S1[i]=='e' || S1[i]=='i' || S1[i]=='E' || S1[i]=='i')&&(S2[j]=='e' || S2[j]=='i' || S2[j]=='E' || S2[j]=='I'))
        return true;
    return false;
}

bool Uplow(string S1, string S2, int i, int j){
    if((S1[i]>=65 && S1[i]<=90)){
        if(S1[i]==S2[j]-32)
            return true;
    }
    else if(S1[i]>=97 && S1[i]<=122){
        if(S1[i]==S2[j]+32)
            return true;
    }
    return false;
}

bool Arab(string S1, string S2) {
    for(int i=0, j=0; i<S1.size(), j<S2.size(); i++,j++){
        if(S1.size()!=S2.size())
             return false;
        if(S1[i]!=S2[j]) {
            if((revise(S1,S2,i,j)==true) || (Uplow(S1,S2,i,j)==true))
                continue;
            else
                return false;
        }
    }
    return true;
}


void Fill(vector <string> &V, int N){
    for(int i=0; i<N; i++){
        string x,y;
        cin>>x>>y;
        if((Arab(x,y)==true)) 
            V.push_back("Yes");
        else
            V.push_back("No");
    }
}

void Show(vector <string> &v, int i){
    if(i==v.size())
        return;
    cout<<v[i]<<endl;
    Show(v, i+1);
}

int main()
{
    int n;
    cin>>n;
    vector <string> v;
    vector <string>::iterator it=v.begin();

    Fill(v,n);
    
    int i=0;
    Show(v,i);

    return 0;
}