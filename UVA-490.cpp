#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[102];
    int c = 0;
    int max = 0;
    while(getline(cin, arr[c])){
        if(arr[c].length() > max){
            max = arr[c].length();
        }
        c++;
    }
    for(int i = 0; i < max; i++){
        for(int j = c - 1; j >= 0; j--){
            if(arr[j].length() > i){
                cout << arr[j][i];
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}