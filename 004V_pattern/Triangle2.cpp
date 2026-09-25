#include<iostream>
using namespace std;

int main(){
    int n;
    while(true){
        cout<<"Enter the range: ";
        cin>>n;
        if(n==0)break;
        for(int line=1;line<=n;line++){
            for(int space=1;space<=(n-line)*2;space++){
                cout<<" ";
            }
            for(int star=1;star<=line;star++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
}
/*



      *
    * *
  * * *
* * * *



        *
      * *
    * * *
  * * * *
* * * * *



*/