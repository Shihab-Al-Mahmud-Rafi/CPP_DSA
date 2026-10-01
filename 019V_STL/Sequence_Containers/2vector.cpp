#include<iostream>
#include<vector>
using namespace std;


//vector alwasy doubles its size when the maximum capacity fulfilled.
int main(){
    vector<int> v;//initially the size if the vector is zero
    vector<int> a(5,1);//this means vector created with a capacity of 5 and all elements are initiated with 1.
    vector<int> b(a);//it copied the 'a' vector
    cout<<"The b vector: ";
    for(int i:b){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"Size: "<<v.capacity()<<endl;// capacity tell the total capacity or initially or after double the size


    v.push_back(12);//we entered the element 12 in the array now capacity become 1
    cout<<"Current size: "<<v.size()<<endl;//size() tells me exactly hoe many elements are there in the vector.

    v.push_back(3);//we entered the element 3 in the array now capacity become 
    cout<<"Current size: "<<v.size()<<endl;

    v.push_back(50);

    v.push_back(45);

    cout<<"First element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;

    cout<<"Before pop: ";
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    v.pop_back();
    cout<<"After pop: ";
    for(int i: v){
        cout<<i<<" ";
    }

    cout<<endl<<"Size before clearing: "<<v.size()<<endl;;
    v.clear();//clear all the element in this vector
    //size will become zero but capacity will not
    cout<<"Size after clearing: "<<v.size()<<endl;
    cout<<"Capacity after clearing: "<<v.capacity()<<endl;

    return 0;
}