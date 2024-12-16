//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
void histogram (int score[],int n);
int main(){
    int repeat,n;
    scanf("%d",&repeat);
    for(int i=0;i<repeat;i++){
        scanf("%d",&n);
        int score[n];
        for(int j=0;j<n;j++){
            scanf("%d",&score[j]);
        }
        histogram(score,n);
    }
    return 0;
}
void histogram (int score[],int n){
    int count[5]={0};
    for(int i=0;i<n;i++){
        count[score[i]-1]++;
    }
    int maxcount=0;
    for(int i=0;i<5;i++){
        if(count[i]>maxcount){
            maxcount=count[i];
        }
    }
    for(int i=maxcount;i>0;i--){
      for(int j=0;j<5;j++){
        if(count[j]>=i){
            printf("* ");
        }
        else {
            printf("  ");
        }
      }
      printf("\n");  
    }
    printf("1 2 3 4 5\n");
}

































 

 
