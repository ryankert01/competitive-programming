#include <iostream>
#include <vector>
using namespace std;

//return base worth
int baseValue(int value, int baseValue, int base[]){
    int flag = 0, sum = 0;
    while(value){
        sum += base[value % baseValue];
        value /= baseValue;
    }
    return sum;
}

int main(){
    int t, t_1 = 0;
    cin >> t;
    while(t--){
        cout << "Case " << ++t_1 << ":\n";
        int base[37] = {};
        for(int i = 0; i < 36; i++){
            cin >> base[i];
        }
        int ca_t;
        cin >> ca_t;
        while(ca_t--){
            int value;
            cin >> value;
            cout << "Cheapest base(s) for number " << value << ": ";
            int baseV[37] = {}, baseVmin = 20000000;
            for(int i = 2; i <= 36; i++){
                baseV[i] = baseValue(value, i, base);
                if(baseV[i] < baseVmin) baseVmin = baseV[i];
            }
            int flag = 0;
            for(int i = 2; i <= 36; i++){
                if(flag && baseV[i] == baseVmin) cout << " ";
                if(baseV[i] == baseVmin){
                    cout << i;
                    flag = 1;
                } 
            }
            cout << endl;
        }
        if(t) cout << endl;
    }
}