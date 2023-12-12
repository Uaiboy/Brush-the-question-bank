#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int ab = a + b;
	int ac = a + c;
	int bc = b + c;
	if (ab % 3 == 0 || bc % 3 == 0 || ac % 3 == 0) {
		printf("yes");
	} else
		printf("no");
}