#include<iostream>
using namespace std;

void checkBalance(double user_balance) {
    cout << "You have" << user_balance << "Baht" << endl;
    cout << "--------------------" << endl ;
    
}

double depositeFunction(double user_balance) {
    double user_deposite=0;
    cout << "Please enter your money" << endl;
    cin >> user_deposite;
    return(user_balance+user_deposite);
}

double withdrawFunction(double user_balance) {
    double user_withdraw=0;
    cin >> user_withdraw;
    if(user_withdraw <= user_balance) {
        user_balance = user_balance-user_withdraw;
    }else{
        cout << "Not enough money";
    }
    return(user_balance);
}


int main() {
    double user_balance = 0;
    while(true){
        int numbers=0;
        cout << "[1] check balance" << endl;
        cout << "[2] deposite" << endl;
        cout << "[3] withdraw" << endl;
        cout << "[4] exit" << endl;
        cout << "Please press the Numbers" << endl;
        cin >> numbers;
        switch (numbers){
        case 1:
            checkBalance(user_balance);
            break;
        case 2:
            user_balance = depositeFunction(user_balance);
            break;
        case 3:
            user_balance = withdrawFunction(user_balance);
            break;
        }
        if(numbers == 4){
            break;
        }
    }
}