#include <iostream>
using namespace std;
 
int main() {
    int i, start, end; 
    cout << "Enter a starting number: " << endl; 
    cin >> start; 
    cout << "Enter a ending number: " << endl; 
    cin >> end; 

    for (i=start; i<end; i++){ 
        if(i%2==0){
            cout << i << " ";  
        }
    }
    cout << endl;
    return 0;
}