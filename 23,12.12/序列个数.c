#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int sum = 0;
	for (a = 1; a <= 10; a++) {
		for (b = a; b <= 10; b++) {
			for (c = b; c <= 10; c++) {
				for (d = c; d <= 10; d++) {
					for (e = d; e <= 10; e++) {
						sum++;
					}
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}