#include <iostream>
using namespace std;


int main(){
    int players, turns;
    while((cin >> players >> turns) && players && turns){
        int vp[512] = {0};
        int winner = 0;
        int tmp = 0;
        for (int i = 0; i < players * turns; ++i) {
            cin >> tmp;
            int cur = i % players;
            vp[cur] += tmp;
            if (vp[cur] >= vp[winner])
                winner = cur;
        }
        cout << winner + 1 << endl;
    }
    return 0;
}