#include <iostream>
using namespace std;

void primeFunction(int numbers) {
    int check=0,result;
    for(int i=1;i<numbers;i++){
        for(int x=1;x<=numbers;x++){
            if(i*x == numbers){
                check++;
            }
            if(check>1){
                break;
            }
        }
    }
    if(check>1){
        cout << "Prime Numbers" << endl;
    }else{
        cout << "Not Prime Numbers" << endl;
        }
}

int main() {
    int numbs=0;
    bool check=true;
    while(check) {
        cin >> numbs;
        if(numbs < 0){
            break;
        }
        primeFunction(numbs);
    }
}