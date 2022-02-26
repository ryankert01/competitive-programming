#include <iostream>
using namespace std;

int main(){
    int a, b, sqI, count;
    while(cin >> a >> b && !(a == 0 && b == 0)){
        count = 0;
        for(int i = 1; i < 500; i++){
            sqI = i * i;
            if(sqI > b) break;
            if(sqI < a) continue;
            if(sqI >= a && sqI <= b) count++;
        }
        cout << count << endl;
    }
}