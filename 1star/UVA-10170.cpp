#include<iostream>
using namespace std;

int main() {
    int s;
    long long int d;
    while (cin >> s >> d) {
        long long int day = 0, i = s;
        while (day < d) {
            day += i; 
            if(day < d) i++;
        }
        cout << i << endl;
    }
}