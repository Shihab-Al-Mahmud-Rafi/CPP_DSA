#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter a number: "; 
    cin>>n;
    
   
    for (int i = 0; i < n; i++) {
        
    
        for (int j = 0; j < n - i; j++) {
            
            // Condition to print stars only on the boundaries
            if (i == 0 || j == 0 || j == (n - i - 1)) {
                cout << "*";
            } else {
                cout << " "; 
            }
        }
        
        cout << endl;
    }
    
    
    return 0;
}
