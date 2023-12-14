#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	double sum = 1;
	int j = 0;
	for (n; n > 0; n--) {
		if (1 == n)
			break;
		int res = 1;
		for (j = n; j > 0; j--) {
			res = j * res;
		}
		sum = res + sum;
	}

	printf("%.0lf", sum);
	return 0;
}
