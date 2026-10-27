class Hero{

    int health;

    public:
    char name[100];
    char level;

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

};