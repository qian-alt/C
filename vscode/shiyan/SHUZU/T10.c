//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
#include<math.h>
int main(void){
    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&X);
    int closest=arr[0];
    int jl=fabs(arr[0]-X);
    for(int i=1;i<N;i++){
        if(fabs(arr[i]-X)<jl){
            jl=arr[i]-X;
            closest=arr[i];
        }//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
#include<math.h>
int main(void){
    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&X);
    int closest=arr[0];
    int min_jl=fabs(arr[0]-X);
    for(int i=1;i<N;i++){
        int jl=fabs(arr[i]-X);
        if(jl<min_jl){
            min_jl=fabs(arr[i]-X);
            closest=arr[i];
        }
    }
        printf("%d",closest);
    return 0;
}

































 

 

    }
        printf("%d",closest);
    return 0;
}

































 

 
