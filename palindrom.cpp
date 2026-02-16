#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string txtstr) {
    string newtxt = "";
    int check=txtstr.length()-1;
    for(int i=0;i<txtstr.length();i++){
        newtxt += txtstr[check];
        check -= 1;
    }
    if(newtxt != txtstr){
        return(false);
    }
    return(true);

}



int main() {
    string txt;
    cin >> txt;
    cout << is_palindrome(txt);

}