#include<stdio.h>
int main(){
    long long N;
    char a[100];
    int i=0;
    int js=0,os=0;
    scanf("%lld",&N);
    while(N>0){
        a[i]=N%10;
        N/=10;
        i++;
    }
    for(int j=i;j>=0;j--){
        if((j+1)%2==0){
            os=os*10+a[j];
        }
        else {
            js=js*10+a[j];
      }
    }
    printf("%d %d",js,os);
    return 0;
        
}