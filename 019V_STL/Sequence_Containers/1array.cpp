#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[4]={1,4,5,3};

    array<int,4> a={2,5,3,4};//this is from the <array> header file and we can now use some function for this array from that header file.
    int size=a.size();//size() gives me the size of the array.
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    //cout<<"Elemnt at index 2 is: "<<a[3]<<end;//a.at() gives me the elemnt of the index and behave slightly different then a[]
    cout<<"First element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;

    
    return 0;
}