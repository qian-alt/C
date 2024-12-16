#include<stdio.h>
#include<string.h>
int main() {
	int n;
	char max;
	char zf[100];
	printf("请输入字符串：");
	scanf("%s", zf);
	n = strlen(zf);
	max = zf[0];
	for (int i = 1; i < n; i++) {
		if (zf[i] > max){
			max = zf[i];
		}
	}
	printf("最大字符为：%c", max);
	return 0;

}
