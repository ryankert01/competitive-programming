#include<iostream>
using namespace std;

int main(){
    long long int a, b;
    while(1){
        cin >> a; cin >> b;
        if(a == 0 && b == 0) break;
        int flag = 0, count = 0;
        while((a != 0 && b != 0)||flag){
            if((a%10+b%10+flag)>=10){
                a/=10; b/=10;
                flag = 1;
                count++;
            }
            else{
                a/=10; b/=10;
                flag = 0;
            }
        }
        if(count == 1) cout << count << " carry operation." << endl;
        else if(count > 1) cout << count << " carry operations." << endl;
        else cout << "No carry operation." << endl;
    }
}