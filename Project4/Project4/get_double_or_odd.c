#include<stdio.h>
#include<stdlib.h>

int get_odd(int num) {
	int i = 0;
	for (i = 30; i >= 0; i -= 2) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}

int get_double(int num) {
	int i = 0;
	for (i = 31; i >= 1; i -= 2) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}


int main() {
	int n;
	printf("请输入一个数：");
	scanf_s("%d", &n);
	get_odd(n);
	get_double(n);
	system("pause");
	return 0;
}