//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int jz[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&jz[i][j]);
        }
    }
    int upper_sum=0;
    int lower_sum=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<=j){
            upper_sum+=jz[i][j];
            }
            if(i>=j){
            lower_sum+=jz[i][j];
            }
        }
    }
   printf("%d %d",upper_sum,lower_sum);
   return 0;
}
//对于上三角，如果行号 <= 列号，就把这个元素加到上三角和中。

//对于下三角，如果行号 >= 列号，就把这个元素加到下三角和中。
































 

 
