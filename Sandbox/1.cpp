#include <bits/stdc++.h>
using namespace std;

struct Calculation{
    char op;
    char var1;
    int val1;
    char var2;
    int val2;
    int res;
};

void FillVec(vector<Calculation> &calc, int n){
    if(n==0)
        return;
    char op;
    char var1;
    int val1;
    char var2;
    int val2;
    int res;
    cin>>op>>var1>>val1>>var2>>val2;
    calc.push_back({op,var1,val1, var2, val2,res});
    FillVec(calc,n-1);
}

void Result(vector<Calculation> &calc, int n, int i){
    if(n==i)
        return;
    if(calc[i].op=='+'){
        calc[i].res=calc[i].val1+calc[i].val2;
    }
    if(calc[i].op=='*'){
        calc[i].res=calc[i].val1*calc[i].val2;
    }
    if(calc[i].op=='-'){
        calc[i].res=calc[i].val1-calc[i].val2;
    }
    Result(calc,n,i+1);
}

int main()
{
    vector<Calculation> calc;

    int n, i=0;
    cin>>n;
    FillVec(calc,n);
    Result(calc,n,i);

    for(;i<n;i++){
        cout<<calc[i].var1<<" "<<calc[i].op<<" "<<calc[i].var2<<" = "<<calc[i].res<<endl;
    }

    return 0;
}