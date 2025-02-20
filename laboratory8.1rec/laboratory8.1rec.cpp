#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int Count(char* str, int i, int comaCount)
{
	if (strlen(str) < 3)
		return -1;
	if (str[i] == 0) {
		return -1;
	}
	if (str[i] == ',') {
		comaCount++;
	}
	if (comaCount == 3) {
		return i;
	}
	return Count(str, i + 1, comaCount);
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i] != 0)
	{
		if (str[i] == ',') {
			*t++ = '*';
			*t++ = '*';
			return Change(dest, str, t, i + 1);
		}
		else {
			*t++ = str[i++];
			return Change(dest, str, t, i);
		}
	}
	else {
		*t = '\0';
		return dest;
	}
}

int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	int s = Count(str, 0, 0);

	cout << "third coma index is " << s << endl;

	char* dest1 = new char[151];
	dest1[0] = '\0';

	char* dest2;

	dest2 = Change(dest1, str, dest1, 0);

	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (param) : " << dest2 << endl;

	delete[] dest1;

	return 0;
}