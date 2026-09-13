#include<iostream>
using namespace std;

int main(){
    char ch='1';
    int num=1;
    switch(ch){//1. In this bracket you can only use it for integer or charecter variable but you cannot use floating point number or string.
        case 1: cout << "First" << endl;
                break;//3. If we do not give this break statement then if this case executes the remaining case below will also execute.
        case '1': cout << "This is a charecter."<<endl;
            switch(num){
                  case 1: cout << "Print this value "<<num<<endl;
                  break;// Even though you have given break, it will go to the deafult statement.
                  //Because this break statement only end this particular switch case it is in but not the outer switch case.
            }
            break;
        default: cout << "It is a defaul case" <<endl;//2. If any of those case is not matching the value then it will come to default case.
        //But using default is not mandatory, we can run the code without this default case.
    }
}

//Option 1: Exiting the loop using a Boolean Flag (Recommended)
//This approach stops the infinite loop but allows any code written after the loop to still run normally.

#include <iostream>

using namespace std; 

int main() {
    int choice = 2;
    bool keepRunning = true; // Flag to control the loop

    while (keepRunning) {
        switch (choice) {
            case 1:
                cout << "Selected option 1." << endl;
                break; // Only exits the switch
            
            case 2:
                cout << "Stopping the loop..." << endl;
                keepRunning = false; // 1. Changes the loop condition
                break;               // 2. Exits the switch
            
            default:
                break;
        }
    }

    // This code WILL run after the loop ends
    cout << "Successfully exited the loop! The program continues." << endl;
    return 0;
}

//Option 2: Terminating the entire program immediately using exit()
//If you want the program to completely shut down the moment that switch case is hit, you can use exit(0).

#include <iostream>
#include <cstdlib> // Required for exit()

using namespace std; 

int main() {
    int choice = 2;

    while (true) { // Infinite loop
        switch (choice) {
            case 1:
                cout << "Selected option 1." << endl;
                break; 
            
            case 2:
                cout << "Exiting the entire program immediately..." << endl;
                exit(0); // Closes the entire application right here
            
            default:
                break;
        }
    }

    // This line will NEVER run
    cout << "This will not print." << endl;
    return 0;
}

