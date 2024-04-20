#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	double S, v, t, a;
	cin >> v >> t >> a;
	S = v * t + (a * pow(t, 2) / 2);
	cout << S;
	return 0;
}