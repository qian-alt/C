//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int factorial(int n);
int main(void){
int a,b;
char op;
while(scanf("%d %c %d",&a,&b,&op)==3){
    switch(op){
        case '+':printf("%d\n",a+b);break;
        case '-':printf("%d\n",a-b);break;
        case '*':printf("%d\n",a*b);break;
        case '/':if(b==0){
            printf("error\n");break;
        }
        else {
            printf("%d\n",a/b);break;
        }
        case '%':if(b==0){
            printf("error\n");break;
    }
        else {
            printf("%d\n",a%b);break;
        }
        case '!':printf("%d\n",factorial(a));break;
   }
 }
 return 0;
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
































 

 
