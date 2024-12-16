//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交c/
#include<stdio.h>
#include<math.h>
int main() {
    int a=0,b=2;
    double  fx,fa,c,x;
    scanf("%lf",&c);
    while(1){
        x=(a+b)/2.0;
        fx=pow(x,5)-2*pow(x,4)+x*x-3;
        if(fabs(fx)<c){
            printf("%lf",x);
            break;
        }
        fa=pow(a,5)-2*pow(a,4)+a*a-3;
        if(fx*fa>0){
            a=x;
        }
        else {
            b=x;
        }
    }
    return 0;
}






































 

 
