#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("*****************\n");
	printf("***** 1.play ****\n");
	printf("***** 0.exit ****\n");
	printf("*****************\n");
}

void game() {
	int ret = (rand() % 100) + 1;
	int num;
	while (1) {
		printf("输入猜的数字\n");
		scanf("%d", &num);
		if (num == ret) {
			printf("猜对了\n");
			break ;
		} else if (num > ret)
			printf("猜大了\n");
		else if (num < ret)
			printf("猜小了\n");
	}
}

int main() {
	int input = 0;
	srand((unsigned int )time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default :
				printf("选择错误,重新选择\n");
				break;
		}
	} while (input);
	return 0;
}