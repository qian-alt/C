//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(){
    long long N;
    scanf("%lld",&N);
    int a[100];
    int i=0;
    while(N/10!=0){
    while(N>0){
        a[i]=N%10;
        N/=10;
        i++;
    }
      for(int i=0;i<100;i++){
          N+=a[i];
      }
  }
      printf("%d",N);
  return 0;
}

































 

 
