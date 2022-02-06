#include <iostream>
#include <vector>
using namespace std;

//return true if and only if there's duplicated number in vector numbers.
bool duplicated(vector<int>numbers, int buffer){
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            if(numbers[i] == numbers[j]) return true;
        }
    }
    return false;
}

int main(){
    int t, caseNum = 1;
    while(cin >> t){
        vector<int>v;
        int temp, flag = 0, checkNum = 0;
        for(int i = 0; i < t; i++){
            cin >> temp;
            if(!(temp > checkNum)) flag = 1;//make sure 1 <= b1 < b2 < b3 ...
            checkNum = temp;
            v.push_back(temp);
        }
        
        vector<int>numbers;
        int buffer;
        for(int i = 0; i < t; i++){
            if(flag) break;
            for(int j = i; j < t; j++){
                buffer = v[i] + v[j];
                numbers.push_back(buffer);
            }
        }
        if(duplicated(numbers, buffer)) flag = 1;



        cout << "Case #" << caseNum++ << ": ";
        if(!flag) cout << "It is a B2-Sequence.\n\n";
        else cout << "It is not a B2-Sequence.\n\n";
    }
}