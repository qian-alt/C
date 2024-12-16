#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0,h=0;
	scanf_s("%d", &a);
	b = a / 10;
	c = a % 10;
	h = c * 10 + b;
	printf("%d", h);
	return 0;

}