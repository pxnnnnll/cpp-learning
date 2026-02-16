#include <iostream>
using namespace std;

int sumFunction(int list[],int size){
    int result = 0;
    for(int i=0;i<size;i++){
        result += list[i];
    }
    return(result);
}

int maxFunction(int list[],int size){
    int result = list[0];
    for(int i=0;i<size;i++){
        if(list[i] > result) {
            result = list[i];
        }
    }
    return(result);
}

int minFunction(int list[],int size){
    int result = list[0];
    for(int i=0;i<size;i++){
        if(list[i] < result) {
            result = list[i];
        }
    }
    return(result);
}

int averageFunction(int list[],int size){
    int result = 0;
    for(int i=0;i<size;i++){
        result+=list[i];
    }
    return(result/size);
}

int main() {
    int numberList[5],check=0,maxnum,minnum,resultnum=0,averagenum=0;
    while(check<5){
        cin >> numberList[check];
        check++;
    }

    cout << sumFunction(numberList,5) << endl;
    cout << maxFunction(numberList,5) << endl;
    cout << minFunction(numberList,5) << endl;
    cout << averageFunction(numberList,5) << endl;
}