#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
using std::cin;

int main(){
    int t = 0;
    cin >> t;
    int relative[502]={};
    int numRelative;
    int sum, house, sumDistance;
    while(t--){
        cin >> numRelative;
        sum = 0;
        for(int i = 0; i < numRelative; i ++){
            cin >> relative[i];
            // sum += relative[i];
        }
        // house = sum / numRelative;
        sort(relative, relative + numRelative);
        house = relative[numRelative/2];
        sumDistance = 0;
        for(int i = 0; i < numRelative; i ++){
            if(house - relative[i] > 0){
                sumDistance += (house - relative[i]);
            }
            else{
                sumDistance -= (house - relative[i]);
            }
        }
        cout << sumDistance << endl;
        
    }
}