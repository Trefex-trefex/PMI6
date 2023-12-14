void replaceZero(int* a, int n) {
	if (n == 1) {
		if (a[0] < 0)
			a[0] = 0;
	}
	else {
		if (a[0] < 0) {
			a[0] = 0;
		}
		replaceZero(a + 1, n - 1);
	}	
}