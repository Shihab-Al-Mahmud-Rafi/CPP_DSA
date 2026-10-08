#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("nothing");
    q.push("is also");
    q.push("something");

    cout<<"First element: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;
    return 0;
}