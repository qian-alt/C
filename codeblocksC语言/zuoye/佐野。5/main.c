#include <stdio.h>

int main() {
    int n;
    printf("�������������еĳ��ȣ�");
    scanf("%d", &n);

    int num[n];
    printf("�������������У�");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("����������֮��Ĳ�Ϊ��");
    for (int i = 0; i <n - 1; i++) {
        printf("%d ", num[i + 1] - num[i]);
    }

    return 0;
}
