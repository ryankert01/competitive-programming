#include <iostream>
using namespace std;

int main() {
  int times;
  int a , b;
  cin >> times;
  while(times > 0)
  {
    cin >> a >> b;
    if(a < b || (a - b) % 2 != 0)
    {
      cout << "impossible" << endl;
    }
    else 
    {
      int x, y =0;
      x = (a - b) / 2;
      cout << x + b << " " << x << endl;
    }
    times--;
  }
}
