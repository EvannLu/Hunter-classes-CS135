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

    //Assignment 56 
    int start, end; 
    cout << "Enter a starting number: " << endl; 
    cin >> start; 
    cout << "Enter a ending number: " << endl; 
    cin >> end; 

    for (i=start; i<end; i++){ 
        if(i%2==0){
            cout << i << " ";  
        }
    }

    return 0;
}

