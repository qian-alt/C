//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int Date,n;
    int sum=0;
    scanf("%d",&Date);
    int a=Date;
    int month=(Date/100)%100;
    int day=Date%100;
    while(a>0){
        n=a%10;
        a/=10;
        sum=sum*10+n;
    }
    if(month<1||month>12||day>31||day<1){
        printf("NO");
        return 0;
    } 
    if(sum==Date){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}

































 

 
