#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

struct dataGirl {
    string country;
    int numbers = 1;
};

bool method1(dataGirl v1, dataGirl v2) {
    int size = v1.country.size();
    if (v2.country.size() < size) size = v2.country.size();
    for (int i = 0; i < size; i++) {
        if (v1.country[i] != v2.country[i]) {
            return v1.country[i] < v2.country[i];
        }
    }
    
}

int main() {
    int t;
    vector<dataGirl>girl;
    cin >> t; cin.ignore();
    while (t--) {

        //input values
        dataGirl temp;
        string Name;
        cin >> temp.country; cin.ignore();
        getline(cin, Name);

        int flag = 0;
        for (int i = 0; i < girl.size(); i++) {
            if (girl[i].country.compare(temp.country) == 0) {
                flag = 1;
                girl[i].numbers++;
            }
        }
        if (!flag) girl.push_back(temp);
    }
    //sorted with alphabetical order
    sort(girl.begin(), girl.end(), method1);
    for (int i = 0; i < girl.size(); i++) {
        cout << girl[i].country << " " << girl[i].numbers << endl;
    }
}