#include <stdio.h>

int main() {
	int m = 2021, n = 2019;
	for (n; n > 0; n -= 2) {
		m = m * n % 100000;
	}
	printf("%d", m);
	return 0;
}
