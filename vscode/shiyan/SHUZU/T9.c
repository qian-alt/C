//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int num=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][j]=-1;
        }
    }
    int flag=1;
    int i=0,j=0;
    while(num<=N*N){
        if(arr[i][j]==-1){
            arr[i][j]=num;
            num++;
        }
        if(flag==1){
            j++;
            if(j>=N||arr[i][j]!=-1){
                j--;
                flag=2;
            }
        }
            else if(flag==2){
                i++;
                if(i>=N||arr[i][j]!=-1){
                    i--;
                    flag=3;
                }
            }
            else if(flag==3){
                j--;
                if(j<0||arr[i][j]!=-1){
                    j++;
                    flag=4;
                }
            }
            else if(flag==4){
                i--;
                if(i<0||arr[i][j]!=-1){
                    i++;
                    flag=1;
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