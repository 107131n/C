
#include<stdio.h>

int main()
{
	int i = 1;
	int a = 0;

	printf("조회할 구구단을 입력하세요:");
	scanf_s("%d", &a);

	while (i < 10);
	{
		printf("a * %d = %d\n", i, (a * i));
		i++;
	}
	return 0;
}