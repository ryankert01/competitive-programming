#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t1, t2;
    char temp;
    int t = 0;
    while(cin >> t1 >> t2){
        if(t1 == 0 && t2 == 0) break;
        
        int arr[101][101] = {};
        if(t) cout << endl;
        for(int i = 0; i < t1; i++){
            for(int j = 0; j < t2; j++){
                cin >> temp;
                if(temp == '*'){
                    arr[i][j] = 9;
                    arr[i+1][j+1]++;
                    arr[i+1][j]++;
                    arr[i][j+1]++;
                    if(j > 0){
                        arr[i][j-1]++;arr[i+1][j-1]++;
                        if(i > 0) arr[i-1][j-1]++;
                    }
                    if(i > 0){
                        arr[i-1][j+1]++;
                        arr[i-1][j]++;
                    }
                } 
            }
            cin.ignore();
        }
        cout << "Field #" << ++t << ":" << endl;
        for(int i = 0; i < t1; i++){
            for(int j = 0; j < t2; j++){
                if(arr[i][j] >= 9) cout << "*";
                else cout << arr[i][j];
            }
            if(i < t1) cout << endl;
        }
    }
}