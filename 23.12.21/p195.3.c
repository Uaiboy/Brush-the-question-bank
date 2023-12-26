#include <stdio.h>
#include <string.h>

int fun(char sub[10], char str[100], int n, int m, int *p1, int *p2) {
	int times = 0;
	int i, x = 0;
	int s;
	for (i = 0; i < m; i++, p2++) {
		if (*p1 == *p2) {
			p1++;
			p2++;
			for (s = 0; s < n; s++) {
				if (*p1 == *p2)
					x++;
				p1++;
				p2++;
			}
			if (x == 4) {
				times++;
			}
		}
	}
	return times;
}

int main() {
	char substr[100] = {'hello'};
	char str[1000] = {'hellowadasksiwhellwdhello'};
	int size1 = strlen(substr);
	int size2 = strlen(str);
	int times = fun(substr, str, size1, size2, &substr[0], &str[0]);
	printf("%d", times);
	return 0;
}
