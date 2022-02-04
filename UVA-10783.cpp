#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int a,b;
        cin >> a;
        cin >> b;
        if(!(a%2))a++;
        if(!(b%2))b--;
        cout << "Case " << i << ": "<< (a+b)*((b-a)/2+1)/2 << endl;
    }
}
