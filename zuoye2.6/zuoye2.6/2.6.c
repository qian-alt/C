#include<stdio.h>
#define N 1000
int main() {
	int sum = 0, i = 3;
	while (i % 3 == 0&&i<=N) {
		sum += i;
		i+=3;
	}
	printf("%d\n", sum);
	return 0;
}

