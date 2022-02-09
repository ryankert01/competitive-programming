#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    string buffer;
    while(getline(cin, buffer)){
        vector<int>v;
        int z = 0, max = 1, sum = 0;
        for(int i = 0; i < buffer.size(); i++){
            z = 0;
            if(buffer[i] >= '0' && buffer[i] <='9') z = buffer[i] - '0';
            if(buffer[i] >= 'A' && buffer[i] <='Z') z = buffer[i] - 'A' + 10;
            if(buffer[i] >= 'a' && buffer[i] <='z') z = buffer[i] - 'a' + 36;
            sum += z;
            if(max < z) max = z;
        }
        int i;
        for(i = max + 1; i <= 62; i++){
            if(sum%(i-1) == 0) break;
        }
        if(i <= 62) cout << i << endl;
        else cout << "such number is impossible!" << endl;
    }
}