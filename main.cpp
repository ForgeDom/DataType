#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	for (size_t i = 0; i <= 255; i++) {
		cout << i << " - " << char(i) << endl;
	}
	return 0;
}