#include<iostream>
#include<cmath>
using namespace std;

int numf(int num, int arr[], int arrsize){
    int ans = 1, count;
    for(int i = 0; arr[i] <= num, i < arrsize; i++){
        if(num%arr[i])continue;
        count = 1;
        while(num%arr[i]==0){
            count++;
            num/=arr[i];
        }
        ans*=count;
    }
    return ans;
}


int main(){
    int flag = 0;
    //find prime numbers first so that we can only look up to prime numbers
    int arr[35000] ={};
    int arrSize = 0;
    for(int i = 0; i < 35000; i++){
        flag = 0;
        for(int j = 2; j <= i; j++){
            if(i == j) flag = 1;
            if(i % j == 0)break;
        }
        if(flag) arr[arrSize++] = i;
    }
    // for(int i = 0; i < arrSize; i++) cout<< arr[i] << " ";



    int t,now;
    cin >> t;
    while(t--){
        int max = 0, ans = 0;
        int first, last;
        cin >> first >> last;
        for(int i = first; i <= last; i++){
            now = numf(i, arr, arrSize);
            if(now > max){
                max = now;
                ans = i;
            }
        }
        cout << "Between "<< first <<" and "<< last <<", "<< ans <<" has a maximum of "<< max <<" divisors." << endl;
    }
}