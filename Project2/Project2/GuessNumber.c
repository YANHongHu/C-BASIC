#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play() 
	



}


int main() {
	int m, num;
	printf("1----��ʼ��Ϸ\n");
	printf("2----�˳���Ϸ\n");
	printf("��ѡ��\n");
	do {
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:play();
			break;
		case 2:
			return 0;
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}
	} while (m != 1 || m != 2);
	system("pause");
	return 0;
}
