//stack is basically last in first out concept
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("not");
    s.push("but");
    s.push("sure");

    // for(string i:s){
    //     cout<<i<<" ";
    // }cout<<endl;

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"The size is: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
    return 0;
}