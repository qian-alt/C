#include <stdio.h>
#define N 3
int main() {
	int i;
	float num, minnum;
	printf("�������һ������\n");
	scanf_s("%f", &num);
	minnum = num;
	for (i = 2; i <= N; i++) {
		printf("�������%d������\n", i);
		scanf_s("%f", &num);
		if (num <= minnum) minnum = num;
		printf("��ǰ��С��Ϊ��%f\n", minnum);
	}
	return 0;
}
