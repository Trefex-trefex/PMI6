int countZeros(int num) {
	if (num == 0)
		return 0;
	if (num % 2 == 0)
		return 1 + countZeros(num / 2);
	return countZeros(num / 2);
}

