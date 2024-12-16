#include <stdio.h>

int perform(int a, int b, char op);

int main() {
    int n, N;
    char input[50];
    char op;
    int a, b, c;
    int count = 0;
    int sum = 0;
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++) {
        scanf("%d", &N);
        getchar();
        sum = 0;
        count = 0;

        while (count < N) {
            if (fgets(input, sizeof(input), stdin) != NULL) {
                if (sscanf(input, "%d%c%d=%d", &a, &op, &b, &c) == 4) {
                    if (op == '/' && b == 0) {
                        count++;
                        continue;
                    }
                    int result = perform(a, b, op);
                    if (result == c) {
                        sum++;
                    }
                }
                count++;
            }
        }

        printf("%.2f\n", sum * 100.0 / N);
    }

    return 0;
}

int perform(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}