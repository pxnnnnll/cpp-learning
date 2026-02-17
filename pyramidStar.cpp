#include<iostream>
using namespace std;


int main(){
    int numbers = 0;
    cin >> numbers;
    for(int i=0;i<numbers;i++){
        for(int x=0;x<=i;x++){
            cout << "*";
        }
        cout << endl;
    }

}
