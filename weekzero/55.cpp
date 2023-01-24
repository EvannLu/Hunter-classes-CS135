#include <iostream>
using namespace std;
 
int main() {
    float celsius, fahren; 
    cout << "Enter an temperature (in celsius)" << endl; 
    cin >> celsius; 

    fahren = (9.0/5.0)*celsius + 32; 

    cout << "The temperature you entered in farenheit is: " << fahren << endl;

    return 0;
}