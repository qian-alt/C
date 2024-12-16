#include<stdio.h>
int main() {
	int a = 0, b = 0, c = 0;
	scanf_s("%d", &a);
	while (a > 0) {
		b = a % 10;
		a /= 10;
		c = c * 10 + b;
	}
	printf("%d", c);
	return 0;
}