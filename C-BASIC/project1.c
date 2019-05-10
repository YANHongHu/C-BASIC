#include<stdio.h>
#include<stdlib.h>
main() {
	int num1, num2;
	int i;
	printf("请输入两个整数");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		for (i = 0; num1%num2 != 0; i++) {
				num2 = num1 % num2;
		}
		printf("%d\n", num2);
	}
	else {
		for (i = 0; num1%num2!= 0; i++) {
			num1 = num2 % num1;
		}
		printf("%d\n",num1);
	}
	system("pause");
	return 0;
}
