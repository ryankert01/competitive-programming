#include<iostream>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(){
    int t;
    while(cin >> t && t != 0){
        int sum = 0;
        for(int i = 1; i < t; i++){
            for(int j = i+1; j <= t; j++){
                sum += gcd(i,j);
            }
        }
        cout << sum << endl;
    }

}