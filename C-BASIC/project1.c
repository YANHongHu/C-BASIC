#include<stdio.h>
#include<stdlib.h>

main() {
		int num1=4;
		int num2=3;
		printf("%d,%d\n", num1, num2);
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
		printf("%d,%d\n", num1, num2);
		system("pause");
		return 0;
}