
#include<stdio.h>

int main()
{
	int i = 1;
	int a = 0;

	printf("��ȸ�� �������� �Է��ϼ���:");
	scanf_s("%d", &a);

	while (i < 10);
	{
		printf("a * %d = %d\n", i, (a * i));
		i++;
	}
	return 0;
}