#include<stdio.h>
#include<stdlib.h>

main() {
	int a[10] = { 10,3,4 };
		if (a[0] > a[1]) {
			if (a[0] > a[2]) {
				printf("%d ", a[0]);
				if (a[1] > a[2]) {
					printf("%d %d", a[1], a[2]);
				}
				else
					printf("%d %d", a[2], a[1]);
			}
			else printf("%d %d %d", a[2],a[0],a[1]);
		}
		else {
			if (a[1] > a[2]) {
				printf("%d ", a[1]);
				if (a[2] > a[0]) {
					printf("%d %d", a[2], a[0]);
				}
				else
					printf("%d %d", a[0], a[2]);
			}
			else
				printf("%d %d %d", a[2], a[1, a[0]]);
		}
	system("pause");
	return 0;
}