#include<iostream>
#include<cctype>
using namespace std;

int main() {
    int countUpper=0,countLower=0;
    string user_input;
    cin >> user_input;
    
    for(char x : user_input) {
        if(isupper(x)){
            countUpper+=1;
        }
        if(islower(x)){
            countLower+=1;
        }
    }
    
    if(countUpper > 1 && countLower > 1) {
        cout << "Mix";
    }else if(countUpper > 1 && countLower == 0){
        cout << "All capital Letter";
    }else if(countUpper == 0 && countLower > 1){
        cout << "All small Letter";
    }

}