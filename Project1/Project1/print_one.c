# include<stdio.h>
# include<stdlib.h>

int count_one_bits( int value)
{
	int count = 0;
	while(value!=0){
		value = value & (value - 1);
		count++;
	}
	return count;
}

int main(){
	int n;
	int number = 0;
	printf("������һ��ʮ��������");
	scanf_s("%d", &n);
	number = count_one_bits(n);
	printf("%d\n", number);
	system("pause");
	return 0;
}
