
#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 6)
        return 0;
    for (int i = 2; i <= 15000; i++) {
        int isPrimeI = 1;
        for (int a = 2; a <= sqrt(i); a++) {
            if (i % a == 0) {
                isPrimeI = 0;
                break;
            }
        }
        for (int j = i; j <= 15000; j++) {
            int isPrimeJ = 1;
            for (int b = 2; b <= sqrt(j); b++) {
                if (j % b == 0) {
                    isPrimeJ = 0;
                    break;
                }
            }
            if (n == i + j && isPrimeI && isPrimeJ&&i!=j) {
                printf("%d=%d+%d\n", n, i, j);
            }
        }
    }
    return 0;
}