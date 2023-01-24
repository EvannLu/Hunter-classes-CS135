// Lab 12 and 13

#include <iostream>
using namespace std;

#define sixTen 101010101010

int main() {

    //Assignment 53
    cout << "Hello World!" << endl << "C++ is fun!" << endl;
    
    //Assignment 54
    int i;
    for (i=0; i<10; i++){
        cout << sixTen << endl;
    }

    //Assignment 55 
    float celsius, fahren; 
    cout << "Enter an temperature (celsius)" << endl; 
    cin >> fahren; 

    celsius = (9.0/5.0)*fahren + 32; 

    cout << "The temperature you entered in celsius is: " << celsius << endl;

    return 0;
}

