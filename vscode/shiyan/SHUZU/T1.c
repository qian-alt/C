//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int a[10];
    int i=0;
    int temp;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",a[i]);
        if(i<9){
        printf(",");
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }
    for(int i=0;i<9;j++){
        printf("%d",a[]);
        if(j>1){
        printf(",");
        }
    }
    return 0;
}

































 

 
