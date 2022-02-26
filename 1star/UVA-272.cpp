#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int count = 0;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 34) {
                count++;
                if (count%2) {
                    cout << "``";
                }
                else {
                    cout << "''";
                }
            }
            else {
                cout << str[i];
            }
        }
        cout << endl;
        str.clear();
    }
}