#include<iostream>
using namespace std;

class Hero{

    int health;

    public:
    char name[100];
    char level;

    //the default constructor has ben dead as we have our own constructor 
    Hero(){
        cout<<"Constructor called."<<endl;
    }

    // Hero(Hero a ){//it becomes infinite loop of copy constructor
        
    // }

    Hero(Hero& a){
        cout<<"Copied succesfully."<<endl;
        this->health=a.health;
        this->level=a.level;
    }

    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }

    Hero(int health, char level){
        //cout<<"this-> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    void levelPrint(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char a){
        level=a;
    }

    ~Hero(){
        cout<<"Object deleted."<<endl;
    }

};