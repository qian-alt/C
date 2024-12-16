#include<stdio.h>
int main() {
	int i;
	int a;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	float sum4 = 0, sum5 = 0, sum6=0, sum7=0;
	for (i = 0; i < 20; i++) 
	{
		printf("请输入第%d个整数\n", i+1);
		scanf_s("%d", &a);
		if (a > 0)
		{
			sum1++;
			sum4 += a;
			sum6 = sum4 / sum1;
		}
		else if (a < 0) {
			sum2++;
			sum5 += a;
			sum7 = sum5 / sum2;
		}
		else { sum3++; }	
	}
	printf("\n正整数有%d个", sum1);
	printf("\n负整数有%d个", sum2);
	printf("\n0有%d个", sum3);
	printf("\n正整数之和为：%.2f", sum4);
	printf("\n负整数之和为：%.2f", sum5);
	printf("\n正整数的平均值为：%..2f", sum6);
	printf("\n负整数的平均值为:%.2f", sum7);
	return 0;
}