#include <bits/stdc++.h>
using namespace std;

void create(int j){
    int num1,num2;
    string op,var1,var2;
    cin>>op>>var1>>num1>>var2>>num2;
    map<string,int> j;
    j[var1]=num1;
    j[var2]=num2;
    j[op]=op;
}


int main()
{
    map <string,int> m;
    map <string, int>::iterator it=m.begin();

    int n,;
    cin>>n;
    for(int i=0, j=1; i<n; i++, j++){
        create(j);
    }
    
    for(it=m.begin(); it!=m.end(); it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;

    return 0;
}