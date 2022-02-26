#include<iostream>
#include<iomanip>
#include <cstring>
#include<cmath>
using namespace std;

int main(){
    double distance, angle;
    double pi = 3.14159265359;
    string r;
    while(cin >> distance >> angle >> r){
        if(r == "min"){
            angle /= 60; 
        }
        if(angle >= 360){
            angle = angle- 360 ;
        }
        if(angle > 180){
            angle = 360 - angle;
        }
        
        distance += 6440;
        angle = angle * pi / 180;
        cout << fixed << setprecision(6);
        cout << distance * angle << " ";
        cout << 2 * distance * sin(angle/2) << endl;
    }

}