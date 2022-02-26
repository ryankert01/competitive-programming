#include<iostream>
#include<iomanip>
using namespace std;

struct xy {
    double x;
    double y;
};

int check(xy r,xy y){
    if(r.x == y.x && r.y == y.y){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    xy a,b,c,d;
    while(cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y){
        if( check(a,c)){
            cout << fixed << setprecision(3) << b.x + d.x - a.x << " " << b.y + d.y - a.y << endl;
        }
        else if(check(a,d)){
            cout << fixed << setprecision(3) << b.x + c.x - a.x << " " << b.y + c.y - a.y << endl;
        }
        else if(check(b,c)){
            cout << fixed << setprecision(3) << a.x + d.x - b.x << " " << a.y + d.y - b.y << endl;
        }
        else if(check(b,d)){
            cout << fixed << setprecision(3) << a.x + c.x - b.x << " " << a.y + c.y - b.y << endl;
        }
    }
}