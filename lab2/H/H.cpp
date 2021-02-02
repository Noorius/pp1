#include <iostream>

using namespace std;

int main() {
    int n,x,ev=0,od=0;
    cin>>n;
    while(n--){
        cin>>x;
        if (x%2==0)
            ev++;
        else if (x%2!=0)
            od++;
    }
    cout<<ev<<" "<<od<<endl;
    return 0;
}