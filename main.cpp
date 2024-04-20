#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

double formula(double r1, double r2, double r3) {
	return 1/(1 / r1 + 1 / r2 + 1 / r3);
}

int main() {
	int r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	double r0 = formula(r1, r2, r3);
	cout << r0 << endl;
	return 0;
}