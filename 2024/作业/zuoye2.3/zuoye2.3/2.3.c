#include <stdio.h>
#define N 3
int main() {
	int i;
	float num, minnum;
	printf("请输入第一个数：\n");
	scanf_s("%f", &num);
	minnum = num;
	for (i = 2; i <= N; i++) {
		printf("请输入第%d个数：\n", i);
		scanf_s("%f", &num);
		if (num <= minnum) minnum = num;
		printf("当前最小数为：%f\n", minnum);
	}
	return 0;
}
