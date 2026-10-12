#include<iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return 0;
}

void reverseArray(char name[]){
    for(int i=0;i<getlength(name)/2;i++){
        char temp=name[i];
    }
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;//when it find gap/space or enter or null charecter, it will stop taking input.
    name[2]='\0';//now it will only print 0 and 1 index
    cout<<"Your name is: "<<name<<endl;
}