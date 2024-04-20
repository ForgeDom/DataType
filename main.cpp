#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {

	/*for (size_t i = 0; i <= 255; i++) {
		cout << i << " - " << char(i) << endl;
	}*/
	int topleft = 201;
	int middle = 205;
	int topright = 187;
	int left = 186;
	int middleleft = 204;
	int middleright = 185;
	int bottomleft = 200;
	int bottomright = 188;
	cout << char(topleft);
	for (int j = 0; j < 84; j++) {
		cout << char(middle);
	}
	cout << char(187) << endl << " " << endl;
	cout << char(186) << "                                  Vremena goda                                      " << char(186) << endl << " " << endl;
	cout << char(204);
	for (int j = 0; j < 84; j++) {
		cout << char(middle);
	}
	cout << char(185) << endl << " " << endl;
	cout << char(204) << "       Zima          " << char(204) << "        Vesna        " << char(204) << "         Leto        " << char(204) << "       Osen       " << char(204) << endl << " " << endl;
	cout << char(200);
	for (int j = 0; j < 84; j++) {
		cout << char(middle);
	}
	cout << char(188) << endl;
	return 0;
}