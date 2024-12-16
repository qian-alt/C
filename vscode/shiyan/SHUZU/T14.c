//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
int countwords(char* arr);
int main(void){
    char arr[100];
    fgets(arr,100,stdin);
    int wordcount =countwords(arr);
    printf("%d",wordcount);
    return 0;
}
int countwords(char* arr){
    int count=0,inword=0;
    while(*arr){
        if(*arr==' '){
            inword=0;
        }
        else if(!inword){
            inword=1;
            count++;
        }
        arr++;
    }
    return count;
}

































 

 
