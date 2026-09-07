#include<iostream>
using namespace std;

int main(){

    int a=3;
    cout<<a<<endl;
    if(true){
        int a=5;//1. this variable 'a' is only created for this 'if' block and will print the value we give it at this 'if' block
        //if we again try to access the a outside the 'if' block it will print the first initialized 'a' value.
        //if we don't give any value in this 'if'block then it will print garbage value of 'a'.
        //this variable 'a' created in this 'if' block will die as soon as the work of 'if' block finished.
        cout<<a<<endl;
    }

    int b=1;
    cout<<b<<endl;

    //int b=2; 2.Will cause error because we have already decalred 'b' variable. Same variable can't be called twice. 
    //cout<<b<<endl;

    //3. Same logic goes for loops, if we created any variable inside loop, that variable will be vanished after the loop breaks.
    //4. Same logic goes for a 'if' or loop under block under another 'if' or loop block.
    // But any variable in the mother block can be used in the child block.
}