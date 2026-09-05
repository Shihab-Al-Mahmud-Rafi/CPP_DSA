#include<iostream>
using namespace std;

int main(){
   int n, line;
   cout<<"\n\n";
   while(1){
    cout<<"Enter the range(Should be a positive odd number): ";
    cin>>n;
    if(n==0){cout<<"This was made for you^-^.\n\n"<<endl; break;}
    if(n>0 && n%2==1){
        for(line=1;line<=n;line++){
            if(line==1){
                cout<<" ";
                for(int i=1;i<=(n/2)-1;i++){
                    cout<<"* ";
                }
                cout<<"  ";
                for(int i=1;i<=(n/2)-1;i++){
                    cout<<"* ";
                }
                cout<<"\n";
                for(int i=1;i<n;i++){
                    cout<<"* ";
                }
                cout<<"\n";
                continue;
            }
            for(int i=2;i<line;i++){
                cout<<" ";
            }
            for(int i=line;i<=n;i++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Please enter a positive odd number."<<endl;
    }
    }

}