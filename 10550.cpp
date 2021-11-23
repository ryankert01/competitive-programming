#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int a, b, c, d;
    while(cin >> a >> b >> c >> d && !((a == 0 && b == 0) && (c == 0 && d == 0)))
    {
        int degree = 1080;
        int change = 0;
        int at = a;
        if (at < b)
        {
            change += 40 - abs(b - at);
        }
        else
        {
            change += abs(b - at);
        }
        at = b;
        if (at > c)
        {
            change += 40 - abs(c - at);
        }
        else
        {
            change += abs(c - at);
        }
        at = c;
        if (at < d)
        {
            change += 40 - abs(d - at);
        }
        else
        {
            change += abs(d - at);
        }
        at = d;
        cout << degree + change * 9 << endl;
    }
}