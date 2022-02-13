#include <iostream>
using namespace std;

int main(){
    int fib[100] = {};
    fib[0] = 1;
    fib[1] = 2;
    for(int i = 2; i < 39; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    //for(int i = 0; i < 39; i++) cout << "#" << i  << " " << fib[i] << endl;


    int t, value;
    cin >> t;
    while(t--){
        cin >> value;
        cout << value << " = ";
        int flag = 0;
        for(int i = 38; i >= 0; i--){
            if(fib[i] <= value){
                value -= fib[i];
                flag = 1;
                cout << 1;
            }
            else if(flag){
                cout << 0;
            }
        } 
        cout << " (fib)" << endl;
    }

}