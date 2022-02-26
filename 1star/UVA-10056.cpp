//Algorithm at notion
//https://www.notion.so/UVA-10056-6efc4fff0c544e68b2dc7e8291e38bdd

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
  int times;
  cin >> times;
  for (int a = 0; a < times; a++)
    {
      int n, i;
      double p;
      cin >> n >> p >> i;
      double q = 1 - p;
      if (q == 1 )
      {
        cout << "0.0000" << endl;
        continue;
      }
      cout << fixed << setprecision(4) << (p * pow(q, i - 1)) / (1.0 - pow(q, n)) << endl;
    }
} 
