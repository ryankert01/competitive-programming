//
//  main.cpp
//  test
//
//  Created by Ryan Kert on 2022/9/12.
//

#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


#define ll long long

int solve() {
    
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    ll x = a*d, y = b*c;
    if(x==y)
        return 0;
    if((x!=0 && y%x==0) || (y!=0 && x%y==0))
        return 1;
    return 2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}
