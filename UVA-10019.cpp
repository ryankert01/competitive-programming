#include <iostream>
using namespace std;

int main(){
    int t, v;
    cin >> t;
    while(t--){
        cin >> v;
        int v1 = v;
        int count = 0;
        while(v1){
            if(v1%2) count++;
            v1 /= 2;
        }
        cout << count << " ";

        int v2;
        count = 0;
        while(v){
            v2 = v%10;
            while(v2){
                if(v2%2) count++;
                v2 /= 2;
            }
            v /= 10;
        }
        cout << count << endl;
    }
}