int sum(int a) {
	if (a > 0) {
		return (a % 10 + sum(a / 10));
	}
	else
		return 0;
}
