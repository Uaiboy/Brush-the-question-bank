#include <stdio.h>

int main() {
	int i = 0, j = 0, coute = 0;
	int arr[] = {87, 39, 35, 1, 99, 10, 54, 1, 46, 24, 74, 62, 49, 13, 2, 80, 24, 58, 8, 14, 83, 23, 97, 85, 3, 2, 86, 10, 71, 15};
	for (i = 0; i < 30; i++) {
		for (j = i + 1; j < 30; j++) {
			if (arr[i] > arr[j])
				coute++;
		}
	}
	printf("%d", coute);
	return 0;
}
