#include<iostream>
using namespace std;

int main(){
    int num;
    while(cin >> num){
        if(num <= 0 || num > 200) break;
        int sum = num;
        int remainder = num;
        int borrow = 1;
        int buffer;
        while(remainder > 2 || (borrow > 0 && remainder > 1)){
            if(remainder % 3 == 2 && borrow > 0){
                remainder++;
                borrow--;
            }
            buffer = remainder % 3; // 7, buffer = 1
            sum += remainder / 3;
            remainder /= 3; // 2
            remainder += buffer; // 3
        }
        cout << sum << endl;
    }
}