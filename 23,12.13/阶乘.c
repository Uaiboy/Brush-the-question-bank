#include <stdio.h>

double fact(int x) {
	if (0 == x || 1 == x)
		return 1;
	return x * fact(x - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	double res = fact(n);
	//double res = 1;
	//int i = 0;
	///for (n; n > 0; n--) {
	//	res = n * res;
	//}
	printf("%.0lf", res);
	return 0;
}
