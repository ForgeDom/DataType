#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	/*for (size_t i = 0; i <= 255; i++) {
		cout << i << " - " << char(i) << endl;
	}*/
	string line = " U lukomor'a dub zelenij,\n Zlataya zep na dupe tom,\n I dnem i nochju kot uchenij\n vse hodit po cepi krugom";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << line;
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}