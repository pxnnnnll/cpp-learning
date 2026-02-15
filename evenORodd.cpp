#include <iostream>
using namespace std;

void evenFunction() {
    cout << "Even";
}

void oddFunction() {
    cout << "Odd";
}

int main() {
    int numbers;
    cin >> numbers;
    if (numbers%2 == 0) {
        evenFunction();
    }else{
        oddFunction();
    }
}
