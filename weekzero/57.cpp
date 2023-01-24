#include <iostream>
using namespace std;
 
int main() {
    int credit; 
    cout << "Enter current amount of credit: " << endl;
    cin >> credit; 

    if(credit >= 94){ 
        cout << "senior" << endl; 
    }
    else if(credit >= 61){
        cout << "junior" << endl;
    }
    else if(credit >= 28){
        cout << "sophomore" << endl;
    }
    else{
        cout << "freshemen" << endl;
    }

    return 0;
}