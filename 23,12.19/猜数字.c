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
		printf("����µ�����\n");
		scanf("%d", &num);
		if (num == ret) {
			printf("�¶���\n");
			break ;
		} else if (num > ret)
			printf("�´���\n");
		else if (num < ret)
			printf("��С��\n");
	}
}

int main() {
	int input = 0;
	srand((unsigned int )time(NULL));
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default :
				printf("ѡ�����,����ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}