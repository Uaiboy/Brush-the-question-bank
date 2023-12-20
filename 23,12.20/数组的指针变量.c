#include <stdio.h>

int main() {
	int arr[] = {2, 5, 1, 6, 2, 3, 6};
	int *p = arr;//默认为arr的第一个数 相等于arr[0]
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	return 0;
}