# include<stdio.h>
# include<stdlib.h>

int count_one_bits( int value)
{
	int count = 0;
	int flag = 0;
	for (; flag < 32;flag++){
		if ((value >> flag & 1)== 1) {
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	int number = 0;
	printf("请输入一个十进制数：");
	scanf_s("%d", &n);
	number = count_one_bits(n);
	printf("%d\n", number);
	system("pause");
	return 0;
}
