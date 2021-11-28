#include <bits/stdc++.h>
using namespace std;

bool Validator(const string& s,const int& n){
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0'&& s[i]<='9'){
            cnt++;
            if(s[i+1]>='0'&& s[i+1]<='9')
                continue;
            else{
                if(cnt>=n)
                    return true;
                else{
                    cnt=0;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n;
    string s;
    cin>>s>>n;
    cout<<(Validator(s,n)?"Valid":"Not valid");

    return 0;
}