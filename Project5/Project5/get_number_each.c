#include<stdio.h>
#include<stdlib.h>


int get_each(int num) {
	if (num != 0) {
		get_each(num / 10);
		printf("%d\n", num % 10);
	}
}

int main() {
	int n;
	scanf_s("%d", &n);
	if (n >= 0) {
		get_each(n);
	}
	else {
		get_each(-n);
	}
	system("pause");
	return 0;
}