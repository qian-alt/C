//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int main(){
    int n,maxnum,minnum;
    char a[4];
    int i=0;
    int t;
    scanf("%d",&n);
    while(n!=6174){
        i=0;
    while(n>0){
        a[i]=n%10;
        n/=10;
        i++;
    }
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(a[k]<a[k+1]){
               t=a[k];
               a[k]=a[k+1];
               a[k+1]=t;
            }
        }
    }
    maxnum=a[0]*1000+a[1]*100+a[2]*10+a[3];
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(a[k]>a[k+1]){
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    minnum=a[0]*1000+a[1]*100+a[2]*10+a[3];
    n=maxnum-minnum; 
    
    printf("%04d-%04d=%04d\n",maxnum,minnum,n);
    }
    return 0;
}






 

























 

 
