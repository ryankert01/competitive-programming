#include<iostream>
using namespace std;

int f (int n) {
	if (n <= 100) {
		n = f (f (n + 11)); //recrusive
	}
	else {
		n = n - 10;
	}
	return n;
}
int main() 
{
	int input;
	while (cin >> input && input) {
		cout << "f91(" << input << ") = " << f(input) << endl;
	}
}
