#include <stdio.h>

int main() {
	int j = 0, i = 0;
	int arr[5];
	scanf("%d", &arr[0]);
	printf("\n");
	scanf("%d\n", &arr[1]);
	scanf("%d\n", &arr[2]);
	scanf("%d\n", &arr[3]);
	scanf("%d\n", &arr[4]);
	for (i = 0; i < 5; i++) {
		int ten = (arr[i] / 10) % 10;
		int han = (arr[i] / 100) % 10;
		int thouthen = (arr[i] / 1000) % 10;
		int num = arr[i] % 10;
		if (ten == thouthen && num - han == 1) {
			j++;
		}
	}
	printf("%d", j);
	return 0;
}