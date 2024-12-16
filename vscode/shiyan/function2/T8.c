#include <stdio.h>

// 递归函数声明
void printHex(int n);

// 主函数
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 输出从 a 到 b 的所有整数的十六进制形式
    for (int i = a; i <= b; i++) {
        printHex(i);
        if (i < b) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

// 递归函数：将整数 n 转换为十六进制形式并输出
void printHex(int n) {
    if (n == 0) {
        return;
    }

    // 递归调用，处理 n / 16
    printHex(n / 16);

    // 输出 n % 16 的十六进制形式
    int remainder = n % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}