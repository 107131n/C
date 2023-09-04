#include <stdio.h>
#include <stdlib.h>

void main() {
	int num = 0;
	int* student = NULL;
	int total = 0;
	printf("학생 수를 입력하세요. : ");
	scanf_s("%d", &num);

	student = (int *) malloc(sizeof(int)* num); //정수형 포인터로 타입캐스팅, student 스택 메모리에 있음

	if (student == NULL) {
		printf("메모리가 부족하여 할당 불가능");
		return;
	}

 	// 메모리 활용
	for (int i = 0; i < num; i++) {
		printf("%d번째 학생의 성적 입력: ", i + 1);
		scanf_s("%d", &student[i]);
	}
	for (int i = 0; i < num; i++) {
		total = total + student[i];
	}
	printf("총점: %d , 평균: %d\n", total, total / num);
	free(student);
}


