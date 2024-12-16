#include<stdio.h>
#include<stdlib.h>
int main(){
FILE*file;
char filename[]="score.txt";
char a[1000];
file=fopen(filename,"r");
if(file==NULL){
    printf("无法打开文件%s\n",filename);
    return 1;
}
printf("文件%s的内容是:",filename);
while(fgets(a,sizeof(a),file)!=NULL)
printf("%s",a);
fclose (file);
return 0;
}
