#include <stdio.h>

int main() {
    int n;
    printf("请输入数字序列的长度：");
    scanf("%d", &n);

    int num[n];
    printf("请输入数字序列：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("相邻两个数之间的差为：");
    for (int i = 0; i <n - 1; i++) {
        printf("%d ", num[i + 1] - num[i]);
    }

    return 0;
}
