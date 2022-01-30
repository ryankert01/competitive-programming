#include<iostream>
using namespace std;

int main(){
    int t;
    int arr[3001];
    while(cin >> t){
        for(int i = 0; i < t; i++) cin >> arr[i];
        //for(int i = 0; i < t; i++) cout << arr[i] << " ";

        int flag = 0, mark[3001]={};
        for(int i = 0; i < t - 1; i++){
            if(abs(arr[i]-arr[i+1]) < t) mark[abs(arr[i]-arr[i+1])]++;
        }
        for(int i = 1; i < t; i++) if(mark[i] != 1) flag = 1;

        if(flag) cout << "Not jolly" << endl;
        else cout << "Jolly" << endl;
    }
}