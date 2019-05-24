#include<stdio.h>
#include<stdlib.h>


int count_one_bits(int value){
	int count = 0;
	while(value!=0){
		value = value & (value - 1);
		count++;
	}
	return count;
}

int find_different(int m, int n) {
	int num = 0;
	num = count_one_bits(m ^ n);
	return num;
}

int main() {
	int m, n;
	scanf_s("%d %d", &m, &n);
	printf("%d", find_different(m, n));
	system("pause");
	return 0;
}