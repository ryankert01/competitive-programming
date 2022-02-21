#include<iostream>
#include<string>
#include<cstring>
#include<map>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while(t--){
        map<string,double>mp;
        string temp;
        int total = 0;
        while(getline(cin, temp) && temp.size() > 0){
            typedef pair<string,double> Tree_pair;
            mp[temp]++;
            total++;
        }
        for(auto& i : mp) cout << i.first << " " << fixed << setprecision(4) << i.second*100/total << endl;
        if(t) cout << endl;
    }
}

