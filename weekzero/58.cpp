#include <iostream>
using namespace std;
 
int main() {
    int num;
    cout << "Enter an int: " << endl;
    cin >> num; 

    char symbol; 
    cout << "Enter a symbol other than space: " << endl;
    cin >> symbol; 

    for(int l=1; l<=num; l++){           //l for lines, sp for space, sy for symbol
        for(int sp=num-l; sp>0; sp--)
            cout << " ";
        for(int sy=1; sy<=l; sy++){
            cout << symbol; 
        }
    cout << endl;
    }
    return 0;
}