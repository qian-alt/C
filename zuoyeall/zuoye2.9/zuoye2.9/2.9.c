#include<stdio.h>
#define N 20
int main() {
	int a, i;
	int maxz = 0, minz = 0, maxf = 0, minf = 0;
	int first_z = 1, first_f = 1;
	for (i = 1; i <= N; i++) {
		printf("�������%d��������", i);
		scanf_s("%d", &a);
		if (a > 0) {
			if (first_z) {
				maxz = a;
				maxz = a;
				first_z = 0;
			}
			else if (a >=maxz) {
				maxz = a;
			}
			else if (a <= minz) {
				minz = a;
			}
		}
		if (a < 0) {
			if (first_f) {
				maxf = a;
				minf = a;
				first_f = 0;
			}
			else if (a >= maxf) {
				maxf = a;
			}
			else if (a <=minf) {
				minf = a;
			}
		}
	}
	printf("���������Ϊ��%d\n", maxz);
	printf("��С������Ϊ��%d\n", minz);
	printf("�������Ϊ��%d\n", maxf);
	printf("��С������Ϊ��%d\n", minf);
	return 0;
}