#include <cmath>

int SumChet(int num) {
	int x = abs(num);
	int s = 0;
	while (x > 0) {
		int t = x % 10;
		if (t % 2 == 0)
			s += t;
		x /= 10;
	}
	return s;
}

int DoubleTen(int num) {
	int t = num / 10 % 10;
	int ans = num - t * 10 + (t * 20) % 100;
	return ans;
}