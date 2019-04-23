#include<stdio.h>
#include<stdlib.h>

main() {
	int a[10] = { 10,3,4,5,6,2,1,7,8,9 };
	int max;
	int i;
	max = a[0];
	for (i = 1; i <= 9; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}