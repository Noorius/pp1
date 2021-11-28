#include <bits/stdc++.h>
using namespace std;

void Sort(vector<int>& v){
    sort(begin(v),end(v));
}

int main()
{
    vector<int> nums={0,9,5,1,1,800,90};
    Sort(nums);
    for(auto c : nums)
        cout<<c<<' ';
    return 0;
}
