//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
void sort(int *arr,int N);
void swap(int *a,int *b);
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N];
    int post;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,N);
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
        if(i<N-1){
            printf(" ");
        }
        //printf("\n");
    }
    return 0;
    
}
void sort(int *arr,int N){
    for(int i=0;i<N;i++){
         int post=i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[post]){
                post=j;
            }
          }
          if(post!=i){
                swap(&arr[post],&arr[i]);
        }
    }
}
void swap(int *a,int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
}
































 

 
