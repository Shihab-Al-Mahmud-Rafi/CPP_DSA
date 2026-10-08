//the frequency of any element will always be one even if we put several same element.

#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    cout<<"Changing: "<<endl;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i: s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);

    for(auto i: s){
        cout<<i<<endl;
    }cout<<endl;

}