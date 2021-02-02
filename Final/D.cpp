#include <bits/stdc++.h>
using namespace std;

double Equivalency(const string& mark){
    if(mark=="A+")
        return 4.00;
    else if(mark=="A")
        return 3.75;
    else if(mark=="B+")
        return 3.50;
    else if(mark=="B")
        return 3.00;
    else if(mark=="C+")
        return 2.50;
    else if(mark=="C")
        return 2.00;
    else if(mark=="D+")
        return 1.50;
    else if(mark=="D")
        return 1.00;
    else if(mark=="F")
        return 0.00;
}

int main()
{
    int n;
    cin>>n;
    multiset <pair <double, pair<string,string> > > m;
    multiset <pair <double, pair<string,string> > >::iterator it;
    
    for(int i=0; i<n; i++){
        string name, lastname;
        double gpa=0;
        int numsub;
        double creditsum=0,totalsum=0;
        cin>>lastname>>name>>numsub;
        for(int i=0; i<numsub; i++){
            string mark;
            int credit;
            cin>>mark>>credit;
            totalsum+=0.0+((1.0*(double)credit)*Equivalency(mark));
            creditsum+=0.0+(1.0*(double)credit);
        }
        gpa=(totalsum/creditsum);
        m.insert(make_pair(gpa,make_pair(lastname,name)));
    }
    for(it=m.begin(); it!=m.end(); it++){
        cout<<(*it).second.first<<" "<<(*it).second.second<<" ";
        printf("%.3lf",(*it).first);
        cout<<endl;
    }
        
    return 0;
}