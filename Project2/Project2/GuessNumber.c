#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void play() 
	



}


int main() {
	int m, num;
	printf("1----开始游戏\n");
	printf("2----退出游戏\n");
	printf("请选择\n");
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
			printf("输入有误，请重新选择\n");
			break;
		}
	} while (m != 1 || m != 2);
	system("pause");
	return 0;
}
