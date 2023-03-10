#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a whole number between -128 and 127: " << endl;
    cin >> n;

    int num = n;
    if (num < 0){
        num = -num-1;
    }

    string result;
    int rem;
    while (num > 0){
        rem = num%2;
        result = to_string(rem) + result; 
        num /=2;
    }

    int size = 8;
    int len = result.length();
    for (int i=0; i < size-len; i++){
        result = "0" + result;
    }

    if (n<0){
        for (int i = 0; i < result.length(); i++){
            if (result[i] == '0'){
                result[i] = '1';
            }
            else if (result[i] == '1'){
            result[i] = '0';
            }
        }
    }
    cout << "Binary string: " << result << endl;
}