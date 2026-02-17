#include<iostream>
#include<string>
using namespace std;

int main() {
    string txt,checktxt;
    int check = 0;
    getline(cin,txt);
    for(int i=0;i<txt.length();i++) {
        if(txt[i] == 'a' || txt[i] == 'A') {
            check+=1;
            checktxt+= txt[i];
        }else if(txt[i] == 'e' || txt[i] == 'E'){
            check+=1;
            checktxt+= txt[i];
        }else if(txt[i] == 'i' || txt[i] == 'I'){
            check+=1;
            checktxt+= txt[i];
        }else if(txt[i] == 'o' || txt[i] == 'O'){
            check+=1;
            checktxt+= txt[i];
        }else if(txt[i] == 'u' || txt[i] == 'U'){
            check+=1;
            checktxt+= txt[i];
        }
        
    }
//cout << check << checktxt << endl << txt ;
}