#include <stdio.h>
void Rua();
int main() {
	Rua();//调用递归函数
	return 0;
}

void Rua() {
	/**********Begin**********/
    int n;
    int number[100];
    int count=0;
    while(scanf("%d",&n)!=EOF){
        number[count]=n;
        count++;
    }
    for(int j=count;j>0;j--){
        printf("%d",number[j]);
    }






	/**********End**********/
}