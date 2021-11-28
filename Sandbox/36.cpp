#include <bits/stdc++.h>
using namespace std;

struct FIO {
    string name;
    string lastname;
};

class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    m[year].name=first_name;
  }
  void ChangeLastName(int year, const string& last_name) {
    m[year].lastname=last_name;
  }
  string GetFullName(int year) {
    if((m[year].name=="") && (m[year].lastname==""))
        cout<<"Incognito"<<endl;
    else{
        if(m[year].name=="")
            cout<<m[year].lastname<<" with unknown first name"<<endl;
        else if(m[year].lastname=="")
            cout<<m[year].name<<" with unknown last name"<<endl;
        else
            cout<<m[year].name<<" "<<m[year].lastname<<endl;
    }
    
  }
private:
    map<int,FIO> m;

};

int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  return 0;
}