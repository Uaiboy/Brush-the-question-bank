#include <stdio.h>

int main() {
	int arr[] = {2, 5, 1, 6, 2, 3, 6};
	int *p = arr;//Ĭ��Ϊarr�ĵ�һ���� �����arr[0]
	printf("%d\n", *p);
	p++;
	printf("%d\n", *p);
	return 0;
}