#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<string> q;
    for(int i=0; i<n; i++){
        int com;
        string name;
        cin>>com;
        if(com==1){
            cin>>name;
            q.push_back(name);
        }
        else if(com==2){
            q.pop_front();
            if(q.empty())
                cout<<"queue is empty"<<endl;
        }
        if(!q.empty())
            cout<<q.front()<<endl;
        
    }

    return 0;
}