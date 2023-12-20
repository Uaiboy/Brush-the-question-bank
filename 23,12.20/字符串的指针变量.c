#include <stdio.h>

int main() {
	char arr[20] = {"hello world"};
	char *p = arr;
	printf("%c\n", *p);
	p++;
	printf("%c\n", *p);
	return 0;
}
