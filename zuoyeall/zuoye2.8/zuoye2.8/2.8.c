#include<stdio.h>
int main() {
	int i;
	int a;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	float sum4 = 0, sum5 = 0, sum6=0, sum7=0;
	for (i = 0; i < 20; i++) 
	{
		printf("�������%d������\n", i+1);
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
	printf("\n��������%d��", sum1);
	printf("\n��������%d��", sum2);
	printf("\n0��%d��", sum3);
	printf("\n������֮��Ϊ��%.2f", sum4);
	printf("\n������֮��Ϊ��%.2f", sum5);
	printf("\n��������ƽ��ֵΪ��%..2f", sum6);
	printf("\n��������ƽ��ֵΪ:%.2f", sum7);
	return 0;
}