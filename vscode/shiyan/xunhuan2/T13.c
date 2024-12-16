//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    do{
        if(n%2!=0){
            n=3*n+1;
            printf("%d",n);
            printf(" ");
        }
        else {
            n/=2;
              printf("%d",n);
               printf(" ");
        }
    } while(n!=1);
    return 0;
}

































 

 
