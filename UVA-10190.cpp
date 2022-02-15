#include<iostream>
using namespace std;

//return false if and only if all integer in arr[] is divisible by the int divisor
bool checkDivisible(int arr[], int divisor, int size){
    for(int i = 0; i < size-1; i++){
        if(arr[i] % divisor) return 1;
    }
    return 0;
}

//return true if and only if a[1] > a[2] > a[3] > . . . > a[k]
bool checkB(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        if(arr[i] <= arr[i+1]) return 1;
    }
    return 0;
}

void printArray(int arr[], int size){
    //print the whole thing
    cout << arr[0];
    for(int i = 1; i < size; i++) cout << " " << arr[i];
    cout << endl;
}

int main(){
    int n, m;
    while(cin >> n >> m){
        int arr[10000] = {};
        int flag = 0;
        int j = 0;

        if(m > n || m <= 1 || n <= 1){
            cout << "Boring!\n";
            continue;
        }

        arr[j] = n;
        while(arr[j] > 1){
            arr[j+1] = arr[j] / m;
            j++;
        }
        j++;

        if(checkDivisible(arr, m, j)) flag = 1;
        if(checkB(arr, j)) flag = 1;
        if(j < 2) flag = 1;

        if(flag) cout << "Boring!\n";
        else printArray(arr, j);
    }
}