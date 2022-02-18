#include<iostream>
#include<algorithm>
using namespace std;

/*
mathmethical question:
d = (|X1 − A| + |X2 − A| + . . . + |Xn − A|)
and has min of d, find A = {...}
and find min of A

<sol.>
find that:
if t is odd then A has one value which is t/2
if t is even then arr[t/2-1] <= A <= arr[t/2]

*/

int main(){
    int t;
    while(cin >> t){
        int* numbers = new int[t]();
        for(int i = 0; i < t; i++) cin >> numbers[i];
        sort(numbers, numbers+t);
        int sum = 0, minElement, maxElement;
        maxElement = t/2;
        minElement = ((t%2) == 0 )? (t/2)-1 : t/2;
        int elements = 0;
        for(int i = 0; i < t; i++) if(numbers[i] == numbers[minElement] || numbers[i] == numbers[maxElement]) elements++;
        int poss = numbers[maxElement] - numbers[minElement] +1;
        cout << numbers[minElement] << " " << elements << " " << poss << endl;
        delete[] numbers;
    }
}