#include <stdio.h>
#include <stdlib.h>

void main() {
	int num = 0;
	int* student = NULL;
	int total = 0;
	printf("�л� ���� �Է��ϼ���. : ");
	scanf_s("%d", &num);

	student = (int *) malloc(sizeof(int)* num); //������ �����ͷ� Ÿ��ĳ����, student ���� �޸𸮿� ����

	if (student == NULL) {
		printf("�޸𸮰� �����Ͽ� �Ҵ� �Ұ���");
		return;
	}

 	// �޸� Ȱ��
	for (int i = 0; i < num; i++) {
		printf("%d��° �л��� ���� �Է�: ", i + 1);
		scanf_s("%d", &student[i]);
	}
	for (int i = 0; i < num; i++) {
		total = total + student[i];
	}
	printf("����: %d , ���: %d\n", total, total / num);
	free(student);
}


