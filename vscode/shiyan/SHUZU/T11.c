//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
void swap(int *a,int *b);
void sort(int *arr,int N);
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,N);
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
        if(i<N-1){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
void sort(int *arr,int N){
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                swap(arr+j,arr+j+1);
            }
        }
    }
}
void swap(int *a,int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
}































 

 
