#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char zf[1000];
int n;
FILE*file;
file=fopen("www.txt","w");
if(file==NULL){
    printf("���ܴ����ļ���");
    return 1;
}
printf("�������ַ���");
scanf("%s",zf);
n=strlen(zf);
for(int i=0;i<n ;i++){
    fprintf(file,"%c\n",zf[i]);
    }
fclose(file);
return 0;
}
