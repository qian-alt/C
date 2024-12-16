//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int a[10];
    int temp;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        temp=a[4-i];
        a[4-i]=a[9-i];
        a[9-i]=temp;
    }
    for(int j=0;j<10;j++){
        printf("%d",a[j]);
        if(j<9){
            printf(",");
        }
    }
    return 0;
}

































 

 
