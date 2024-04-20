#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*for (size_t i = 0; i <= 255; i++) {
		cout << i << " - " << char(i) << endl;
	}*/
	char str1[] = "The war and the peace";
	char str2[] = "L.N.Tolstoj";
	char str3[] = "Piter";
	int x = 500;
	cout << "\tName       : ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << str1 << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "\tAvtor      :   " << str2 << endl;
	cout << "\tIzdatelstvo:  " << str3 << endl;
	cout << "\tPages      : ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << x << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;


}