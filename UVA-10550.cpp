#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int a, b, c, d;
    while(cin >> a >> b >> c >> d && !((a == 0 && b == 0) && (c == 0 && d == 0)))
    {
        int degree = 120;
        degree += (40 + a - b) % 40;
        degree += (40 - b + c) % 40;
        degree += (40 + c - d) % 40;
        cout << degree * 9 << endl;
        
    }
}
