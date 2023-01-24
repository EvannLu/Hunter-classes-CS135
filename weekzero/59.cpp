#include <iostream>
using namespace std;
 
int main() {
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
    return 0;
}