#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> a;

    a[1]="something";
    a[10]="nothing";
    a[3]="anything";
    for(auto i:a){
        cout<<i.first<<endl;
    }cout<<endl;

    a.insert({6,"nooo"});
    cout<<"After insterting: "<<endl;
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"Finding 10: "<<a.count(10)<<endl<<endl;

    a.erase(10);

    cout<<"After erase: "<<endl;
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    } 
    return 0;
}