//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(j!=0)
            printf(" ");
            printf("%d",arr[j][i]);
           // printf(" ");
        }
        printf("\n");
    }
    return 0;
}

































 

 
