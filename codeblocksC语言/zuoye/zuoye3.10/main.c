#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char zf[1000];
int n;
FILE*file;
file=fopen("www.txt","w");
if(file==NULL){
    printf("不能创建文件！");
    return 1;
}
printf("请输入字符串");
scanf("%s",zf);
n=strlen(zf);
for(int i=0;i<n ;i++){
    fprintf(file,"%c\n",zf[i]);
    }
fclose(file);
return 0;
}
