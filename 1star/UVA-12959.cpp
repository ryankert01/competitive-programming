#include <iostream>
using namespace std;


int main(){
    int players, turns;
    while((cin >> players >> turns) && players && turns){
        int points[512] = {0};
        int winner = 0;
        int temp = 0;
        for(int i = 0; i < turns; i++)
            for(int j = 0; j < players; j++)
            {
                cin >> temp;
                points[j] += temp;
                //play last wins so there should have a "="
                if(points[j] >= points[winner])
                    winner = j;
            }
        cout << winner + 1 << endl;
    }
    return 0;
}