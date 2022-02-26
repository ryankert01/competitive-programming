#include<iostream>
using namespace std;

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << endl;
        char arr[102][102] = {};
        char temp[102] = {};
        for (int i = 1; i < m+1; i++){
            cin >> temp;
            for (int j = 1; j < n+1; j++){
                arr[i][j] = temp[j-1];
            }
        }
//r++; c++;//using that
        int r, c;
        while(q--){
            cin >> r >> c; 
            int flag = 0;
            int times = 0;

            while(true){
                for(int i = r-times; i <= r+2+times; i++){
                    for(int j = c-times; j <= c+2+times; j++){
                        if(arr[i][j] != arr[r+1][c+1]){
                            flag = 1; 
                            break;
                        }
                    }
                }
                if(flag == 1){
                    cout << 1+times*2 << endl;
                    break;
                }
                times++; 
            } 
        }
    }
}