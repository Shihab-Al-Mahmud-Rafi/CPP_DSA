#include<iostream>
#include "2nd_h.cpp"
using namespace std;

//"class" is actually a user defined data type.



// class Hero{//in an empty class there will only 1 byte memory allocation to size will be 1 if this is empty class

//     //properties
//     // char name[100];
//     // int health;
//     // char level;

//     //int health;//garbage value is present

       //lets use another file for this class
// };


int main(){
    //creating object
    Hero h1;

    h1.setHealth(100);
    h1.level='A';

    cout<<"Size of object: "<<sizeof(h1)<<endl;
    cout<<"Health: "<<h1.getHealth()<<endl;
    //cout<<"Health: "<<h1.health<<endl;
    cout<<"Level: "<<h1.level<<endl;
}