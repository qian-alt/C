#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char max;
	char zf[100];
	printf("�������ַ�����");
	scanf("%s", zf);
	n = strlen(zf);
	max = zf[0];
	for (int i = 1; i < n; i++) {
		if (zf[i] > max){
			max = zf[i];
		}
	}
	printf("����ַ�Ϊ��%c", max);
	return 0;

}
