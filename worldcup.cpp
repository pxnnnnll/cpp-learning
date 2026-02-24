#include<iostream>
using namespace std;

//int 

int main() {
    string teamname[4];
    int score[4][4];

    for(int i=0;i<4;i++) {
        cin >> teamname[i];
    }

    for(int i=0;i<4;i++) {
        for(int x=0;i<4;i++){
            cin >> score[i][x];
        }
    }
}