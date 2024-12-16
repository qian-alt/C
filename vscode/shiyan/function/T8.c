#include<stdio.h>
//编写最大公约数GCD函数
/*********Begin*********/
long long int gcd(long long int A,long long int B){
    while(B!=0){
        long long int temp=B;
        B=A%B;
        A=temp;
    }
    return A;
}

/*********End**********/ 

//编写最小公倍数LCM函数
/*********Begin*********/
long long int LCM(long long int A,long long int B){
    long long int gcd_a=gcd(A,B);
    return (A*B)/gcd_a;
}
/*********End**********/ 
int main(void)
{  
    /*********Begin*********/
   long long int A,B;
   scanf("%lld %lld\n",&A,&B);
   if(A<0||B<0){
       printf("Input Error");
   }else {
   long long int gcd_a=gcd(A,B);
   long long int LCM_a=LCM(A,B);
   printf("%lld %lld",gcd_a,LCM_a);
   }
    /*********End**********/ 
    return 0;
}
