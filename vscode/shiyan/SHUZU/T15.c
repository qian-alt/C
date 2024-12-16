//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
 #include<stdio.h>
 #include<string.h>
 int main(void){
     char str_s[100];
     char str_t[100];
     char a[100];
     int count=0;
     fgets(str_s,100,stdin);
     scanf("%s",str_t);
     int len1=strlen(str_s);
     int len2=strlen(str_t);
     char* p=str_s;
     for(int i=0;i<len1-len2;i++){
         for(int j=0;j<len2;j++){
             a[j]=*(p+i+j);
         }
         if(strcmp(str_t,a)==0){
         printf("%d\n",i);
         count++;
      }
     }
     if(count==0){
         printf("-1");
     }
     return 0;
 }

































 

 
