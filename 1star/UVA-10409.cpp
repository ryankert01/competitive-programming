#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Dice{
    int north;
    int west;
    int east;
    int south;
};

int main(){
    int t;
    while(cin >> t, t != 0){
        //initialize the dice
        int top = 1, north = 2, south = 5, west = 3, east = 4, buttom = 6;
        int top1 = 1, north1 = 2, south1 = 5, west1 = 3, east1 = 4, buttom1 = 6;
        cin.ignore();
        string temp;
        while(t--){
            getline(cin, temp);
            if(temp == "north"){
                buttom1 = north;
                top1 = south;
                north1 = top;
                south1 = buttom;
            }
            if(temp == "south"){
                buttom1 = south;
                top1 = north;
                north1 = buttom;
                south1 = top;
            }
            if(temp == "west"){
                buttom1 = west;
                top1 = east;
                west1 = top;
                east1 = buttom;
            }
            if(temp == "east"){
                buttom1 = east;
                top1 = west;
                west1 = buttom;
                east1 = top;
            }
            top = top1;
            buttom = buttom1;
            north = north1;
            south = south1;
            west = west1;
            east = east1;
        }
        cout << top << endl;
    }
    

}