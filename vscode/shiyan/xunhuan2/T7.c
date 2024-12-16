#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b);
void simplify(int *numerator,int *denominator);
void perform(int num1,int deny1,int num2,int deny2,char op,int *resultnum,int *resultden);
 
 int main(){
    char input[50];
    int num1,deny1,num2,deny2;
    char op;
    int resultnum,resultden;
    while(fgets(input,sizeof(input),stdin)){
        sscanf(input,"%d/%d%c%d/%d",&num1,&deny1,&op,&num2,&deny2);
        perform(num1,deny1,num2,deny2,op,&resultnum,&resultden);
       if (resultden == 1) {
        printf("%d\n", resultnum);
    } else if ( resultnum< 0 && resultden < 0) {
        printf("%d/%d\n", - resultnum, -resultden);
    } else if ( resultnum < 0 || resultden < 0) {
        printf("-%d/%d\n", abs( resultnum), abs(resultden));
    } else {
        printf("%d/%d\n",  resultnum, resultden);
    }
    }
    return 0;
 }
 int gcd(int a,int b){
    if(b==0){
       return a;
    }
       return gcd(b,a%b);
 }
 void simplify(int *numerator,int *denominator){
    int g=gcd(*numerator,*denominator);
    *numerator/=g;
    *denominator/=g;
 }
 void perform (int num1,int deny1,int num2,int deny2,char op,int *resultnum,int *resultden){
    if(op=='+'){
        *resultnum=num1*deny2+num2*deny1;
        *resultden=deny1*deny2;
    }
    else if(op=='-') {
        *resultnum=num1*deny2-num2*deny1;
        *resultden=deny1*deny2;
    }
    simplify(resultnum,resultden);
 }