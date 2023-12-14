#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	char* str = new char[MAX_LENGTH];
	str[0] = 'b', str[1] = 'e', str[2] = 'r', str[3] = 's', str[4] = 'e', str[5] = 'r', str[6] = 'k', str[7] = '\0';
	cout << "str: " << str << endl;
	insert_first(str);
	cout << "str after change: " << str << endl;

}