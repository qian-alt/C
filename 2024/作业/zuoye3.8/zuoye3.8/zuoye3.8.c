#include<stdio.h>
int main() {
    char zf[100];
    int i = 0;
    printf("请输入字符串：");
        scanf_s("%s", zf);
    if (zf[0] == '0') {
        printf("你输入的是空串\n");
    }
    else {
        printf("你输入的是：%s\n",zf);
    }
    return 0;

}
