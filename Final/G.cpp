#include <bits/stdc++.h>
using namespace std;

bool foo(int N, int J)
{
    if(N<2)
        return false;
    if(J<N) {
        if(N%J==0)
            return false;
    }
    if(J==N)
        return true;
    return foo(N,J+1);
}

void Ans(int J, int NUM){
    int init=NUM;
    set<int> s;
    set<int>::iterator it;
    for(int i=3; s.size()!=2 ; i++){
        if(foo(i,J)==true){ //Проверяет является ли число от 3 до ... Prime, если да, то является ли число n-i Prime 
            if(foo(NUM-i,2)==true){
                s.insert(i);
                s.insert(NUM-i);
                break;
            }
            else
                continue;
        } 
    }
    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
}

int main()
{
    int number, j=2;
    cin>>number;
    Ans(j,number);

    return 0;
}