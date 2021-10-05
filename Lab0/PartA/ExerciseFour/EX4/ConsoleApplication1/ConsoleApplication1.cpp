#include <iostream>
#include <conio.h> // Use this for getch() 
// Note: CygWin GCC does not support this
using namespace std;

int main(void)
{
	char c;
	do
	{
		cout << "Hello World" << endl;
		c = _getch();
	} while (c != '.');

		system("PAUSE");
	return 0;
}
