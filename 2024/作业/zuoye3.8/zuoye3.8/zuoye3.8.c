#include<stdio.h>
int main() {
    char zf[100];
    int i = 0;
    printf("�������ַ�����");
        scanf_s("%s", zf);
    if (zf[0] == '0') {
        printf("��������ǿմ�\n");
    }
    else {
        printf("��������ǣ�%s\n",zf);
    }
    return 0;

}
