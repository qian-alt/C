//#include<stdio.h>
//#include<stdlib.h>
//void f(char s[]){
  //  if(s[0]=='\0') return;
    //else {
      //  f(s+1);
        //putchar(s[0]);
    //}
//}
//int main(){
  //  char ch[80];
    //fgets(ch,sizeof(ch),stdin);
    //f(ch);
    //return 0;
//}


#include<stdio.h>
#include<stdlib.h>
long long f (int n){
    if(n==1||n==2) return 1;
    else  return f(n-1)+f(n-2);
}
int main(){
    printf("%ld",f(60));
    return 0;
}