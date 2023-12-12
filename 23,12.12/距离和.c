#include <stdio.h>

int a(int n) {
	if (n > 0)
		return n;
	else
		return -1 * n;
}

int main() {
	char ch[] = "LANQIAO";
	int i, j, t = 0;
	for (i = 0; i < 6; i++)
		for (j = i + 1; j < 7; j++)
			t += a(ch[j] - ch[i]);
	printf("%d", t);

	return 0;
}