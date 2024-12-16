//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int num=1;
    for(int i=0;i<N;i++){
        if(i%2==0){
         for(int j=0;j<N;j++){
             arr[i][j]=num++;
         }
        }
        else {
            for(int j=N-1;j>=0;j--){
                arr[i][j]=num++;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%03d",arr[i][j]);
            if(j<N-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

































 

 
