#include<iostream>
#include <limits> // 1. You MUST include this to use numeric_limits
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // cout<<"hello it is "<<n<<endl;

    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"a is positive."<<endl;
    // }
    // else if(a==0){
    //     cout<<"a is zero."<<endl;
    // }
    // else{
    //     cout<<"a is negetive."<<endl;
    // }
    // int b,c;
    // cin>>b>>c;
    // cout<<"Value of B is: "<<b<<" and value of C is: "<<c<<endl;

    //1. to also take the space or tab as a input we need to use the line below;
    int d=cin.get();//2. it takes just one charecter as input also takes space as input.
    cout<<"The value is: "<<d<<endl;
    //string a="Ami kisu jani na";
    //char h='Ami kisu jani n';//3. now if we print h then it will print the last word n.
    char h;
    string a;
    //cin>>a;//4. but if we give an input such as "we want to go there" it will only take the forst string as input and will print "we".
    cin.ignore(numeric_limits<streamsize>::max(),'\n');//5. this line is to prevent the input buffer we will get via cin. Without this line, getline will take newline '\n' as a input and totally skip our getline input session.
    getline(cin,a);//6. getline will take the whole sentence including the space.
    cout<<"She told that "<<a<<endl;

}

