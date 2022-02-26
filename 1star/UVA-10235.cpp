#include<iostream>
using namespace std;

//return true if and only if the number is a primary number.
bool isPrimeNum(int num){
    for(int i = 2; i < num; i++){
        if(num%i == 0) return false;
    }
    return true;
}

//return the reversed digit
int reverseDigit(int num){
    int ans = 0, flag = 0;
    int check = num;
    while(num){
        if(flag) ans *= 10;
        ans += num%10;
        num /= 10;
        flag = 1;
    }
    if(ans == check) return 8;
    //is ans == num then it's not cinsidered an emirp.
    return ans;
}




int main(){
    int numb;
    while(cin >> numb){
        cout << numb;
        if(isPrimeNum(numb)){
            numb = reverseDigit(numb);
            if(isPrimeNum(numb)) cout << " is emirp.\n";
            else cout << " is prime.\n";
        }
        else cout << " is not prime.\n";
    }

}