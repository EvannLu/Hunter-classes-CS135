// Lab 12 and 13

#include <iostream>
using namespace std;

#define sixTen 101010101010     //For Assignment 53 

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
    cout << "Enter an temperature (in celsius)" << endl; 
    cin >> celsius; 

    fahren = (9.0/5.0)*celsius + 32; 

    cout << "The temperature you entered in farenheit is: " << fahren << endl;


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
    cout << endl;


    //Assignment 57 
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


    //Assignment 58 
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


    //Assignment 59 
    int m;

    float annBudget; 
    cout << "Input your annual budget: " << endl; 
    cin >> annBudget; 

    float monExpense;
    cout << "Input your month expense: " << endl; 
    cin >> monExpense; 

    cout << "month" << "   expense" << " remaining balance of budget" << endl;

    for(m=1; m<=6; m++){        //From Jan to Jun
        printf("%5d\t%7.2f\t%27.2f\n", m, monExpense, annBudget -= monExpense);
    }

    monExpense = monExpense * 1.15;     //From Jul to Dec
    for(m=7; m<=12; m++){
        printf("%5d\t%7.2f\t%27.2f\n", m, monExpense, annBudget -= monExpense);
    }
    if(annBudget -= monExpense < 0){
        printf("Need higher budget");
    }


    //Assignment 60 
   

    return 0;
}

