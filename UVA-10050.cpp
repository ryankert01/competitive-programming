#include<iostream>
using namespace std;

void hDay(int (&day)[4000], int partyDay, int MaxDay){
    for(int i = partyDay; i <= MaxDay; i += partyDay){
        if(i%7 == 0 || i%7 == 6) continue;
        day[i] = 1;
    }
}

int main(){
    int days, parties, t;
    cin >> t;
    while(t-- && cin >> days){
        cin >> parties;
        int party[120] = {};
        int day[4000] = {};
        for(int i = 0; i < parties; i++){
            cin >> party[i];
            hDay(day, party[i], days);
        }
        //hDay(day, party[1], days);
        int sum = 0;
        for(int i = 0; i <= days; i++){
            if(day[i]) sum++;
        }
        cout << sum << endl;

    }
}
