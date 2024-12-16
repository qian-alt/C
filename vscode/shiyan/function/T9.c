#include<stdio.h>
#include<math.h>

// 判断一个数是否为素数
int IS_prime(int n) {
    if (n <= 1) {
        return 0; // 1 和负数不是素数
    }
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return 0; // 不是素数
        }
    }
    return 1; // 是素数
}

// 找到离n最近的素数
int find_nearest_prime(int n) {
    if (IS_prime(n)) {
        return n;
    }
    int left = n - 1;
    int right = n + 1;
    while (1) {
        if (IS_prime(left)) {
            return left;
        }
        if (IS_prime(right)) {
            return right;
        }
        left--;
        right++;
    }
}

int main(void) {
    int N, M;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        int nearest_prime = find_nearest_prime(M);
        int distance = abs(nearest_prime - M);
        printf("%d %d\n", nearest_prime, distance);
    return 0;
    }
}