#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

int binaryToDecimal(string binary){
    int dec = 0, pos = 0;
    for(int i = binary.size()-1; i >= 0; i--){
        if(binary[i] == '1') dec += pow(2, pos);
        pos++;
    }
    return dec;
}

//using Euclidean algorithm to find GCD which stands for greatest common divisor
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int t;
    cin >> t;cin.ignore();
    for(int tt = 1; tt <= t; tt++){
        string c1, c2;
        
        getline(cin, c1);
        getline(cin, c2);
        int c1int = binaryToDecimal(c1);
        int c2int = binaryToDecimal(c2);
        int ans = gcd(c1int, c2int);
        cout << "Pair #" << tt << ": ";
        if(ans > 1) cout << "All you need is love!\n";
        else if(ans == 1) cout << "Love is not all you need!\n";
    }
}