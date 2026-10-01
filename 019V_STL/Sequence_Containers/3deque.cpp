#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(23);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    //d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"The first index is: "<<d.at(0)<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;// if the size is zero then it returns 1 otherwise returns 0;

    // d.clear();
    // cout<<"empty or not: "<<d.empty()<<endl;

    //d.erase(d.begin());//this will erase a specific index that we put in the bracket
    // we can also put a range exactly where do we want to erase.

    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;




}
