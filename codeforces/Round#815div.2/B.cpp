//
//  main.cpp
//  test
//
//  Created by Ryan Kert on 2022/9/12.
//

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
using namespace std;


#define ll long long

int solve() {
    int size;
    cin >> size;
    vector<int> nums(size);
    for(int i = 0; i < size; i++) cin >> nums[i];
    int m[4] = {INT_MIN, INT_MIN, INT_MAX, INT_MAX};
    for(int& i : nums) {
        m[1] = max(m[1], i);
        if(m[0] < m[1]) swap(m[0], m[1]);
        m[3] = min(m[3], i);
        if(m[2] > m[3]) swap(m[2], m[3]);
    }
    return m[0] + m[1] - m[2] - m[3];
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
