#include<iostream>
using namespace std;

int year2010Day = 3;

int main(){
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};// 0~6
    int t, day, month;
    cin >> t;
    while(t--){
        cin >> month >> day;
        int sumDays = day;
        for(int i = 1; i < month; i++) sumDays += days[i];
        cout << sumDays << endl;
        int weekday = sumDays % 7 - year2010Day;
        if(weekday < 0) weekday += 7;
        cout << dayOfWeek[sumDays % 7 - year2010Day] << endl;

    }
}