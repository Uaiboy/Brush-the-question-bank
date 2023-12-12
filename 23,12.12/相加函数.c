#include <stdio.h>

int Add(int x, int y) {
	return x + y;
}

int main() {
	int a = 20, b = 40;
	int sum = Add(a, b);
	printf("%d", sum);
}