#include "Header.h"

bool str_double(const char* str1) {
	const char* str2 = str1;
	str2++;
	while (*str1 || *str2) {
		if (*str1 == *str2)
			return false;
		str1++;
		str2++;
	}
	return true;
}

void insert_first(char*& str) {
	char str1[MAX_LENGTH];
	for (int i = 0;; i++)
	{
		if (str[i] == '\0') { str1[i] = '\0'; break; }
		str1[i] = str[i];
	}
	str[0] = '*';
	for (int i = 1;; i++)
	{
		if (str1[i - 1] == '\0') { str[i] = '\0'; break; }
		str[i] = str1[i - 1];
	}
}