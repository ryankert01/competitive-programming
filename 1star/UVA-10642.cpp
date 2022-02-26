#include <iostream>
using namespace std;

int main(){
    int ca;
    cin >> ca;int x1, y1, x2, y2;int root1, root2, xy1, xy2;
    for(int t = 1; t <= ca; t++){
        cin >> x1 >> y1 >> x2 >> y2;
        xy1 = x1+y1;
        xy2 = x2+y2;
        root1 = (1+xy1)*xy1/2 + x1;
        root2 = (1+xy2)*xy2/2 + x2;
        cout << "Case " << t << ": " << root2 - root1 << endl;
    }
}