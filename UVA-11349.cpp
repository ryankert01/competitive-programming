#include<iostream>
#include<vector>
using namespace std;


//return true if and only if this matrix is symmetric.
bool symmetric(vector<vector<long long int>>v, int n){
    int mid = (n%2 ? (n+1)/2 : n/2);
    for(int i = 0; i < mid; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] < 0 || v[n-1-i][n-1-j] < 0) return false;
            if(v[i][j] != v[n-1-i][n-1-j]) return false;
        }
    }
    return true;
}


int main(){
    int t, times = 1;
    cin >> t;
    while(t--){
        char c;
        int n;
        long long int buffer;
        cin >> c >> c >> n;
        vector<long long int>temp;
        vector<vector<long long int>>v;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> buffer;
                temp.push_back(buffer);
            }
            v.push_back(temp);
            temp.clear();
        }

        // for(vector<long long int>read : v){
        //     for(long long int i : read){
        //         cout << i << " ";
        //     }
        //     cout << endl;
        // }


        cout << "Test #" << times++ << ": ";
        if(symmetric(v,n)) cout << "Symmetric." << endl;
        else cout << "Non-symmetric." << endl;

    }
}