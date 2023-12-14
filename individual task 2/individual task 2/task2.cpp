void delTwoEqual(int*& a, int& n) {
	int start = -1, end = -1;
	bool flag = true;
	for (int i = 0; flag; i++) {
		if (i + 1 == n)
			if (start != -1) {
				end = i;
				flag = false;
			}
			else flag = false;
		else if (a[i] == a[i + 1] && start == -1) start = i;
		else if (a[i] != a[i + 1] && start != -1) {
			if (i - start == 1) {
				end = i;
				flag = false;
			}
			else start = -1;
		}
	}
	if ((end - start) == 1 && start != -1 && end != -1) {
		int* b = new int[n - 2];
		for (int i = 0; i < start; i++) b[i] = a[i];
		for (int i = end + 1; i < n; i++) b[i - 2] = a[i];
		n -= 2;
		delete[]a;
		a = b;
	}
}