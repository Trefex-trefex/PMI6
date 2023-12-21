void changeWord(char* str) {
	while (*str) {
		while (*str && *str != ' ') str++;
		if (*str) str++;
		while (*str && *str == ' ') {
			*str = '*';
			str++;
		}
	}
}