#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int addUp(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int recursive(int num, int count){
    if(num == 9) return ++count;
    else return recursive(addUp(num), ++count);
}

int main(){
    string dividend;
    while(getline(cin, dividend)){
        int sum = 0, count = 0;
        for(int i = 0; i < dividend.size(); i++) sum += dividend[i]-'0';
        if(sum == 0) break;
        cout << dividend;
        if(sum%9 == 0) cout << " is a multiple of 9 and has 9-degree " << recursive(sum, count) << ".\n";
        else cout << " is not a multiple of 9.\n";
    }
}