//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
#include<string.h>
int main(void){
    char arr[100];
    scanf("%s",arr);
    int length=strlen(arr);
    for(int i=0;i<length;i++){
        char *a=arr+i;
        for(int j=i;j<length;j++){
            printf("%c",*a);
            a++;
        }
        printf("\n");
    }
    return 0;
}

































 

 

