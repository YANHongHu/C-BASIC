#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 20;
	int b = 30;
	printf("%d,%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}