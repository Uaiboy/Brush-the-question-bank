#include <stdio.h>

int main() {
	int a = 10;
	float b = 20.2;
	int *p1;
	float *p2;
	p1 = &a;
	p2 = &b;
	printf("%#x,%#x\n", p1, p2);
	printf("%d %0.1f", *p1, *p2);
	
	return 0;
}