//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void){
    int a[20];
    char invalid_score[100]={0};
    char b[10];
    double sum=0,sum1=0;
    int count=0;
    double aver;
    for(int i=0;i<20;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    aver=sum/20.0;
    printf("所有评委平均分:%.3f分.\n",aver);
    for(int i=0;i<20;i++){
        if(fabs(aver-a[i])>10){
        count++;
        if(count>1){
            strcat(invalid_score," ");
        }
        sprintf(b,"%d",a[i]);
        strcat(invalid_score,b);
        }
       // printf("不合格得分:%d.\n",a[i]);
       else{
        sum1+=a[i];
       }

    }
    if(count>0){
    printf("不合格得分:%s .\n",invalid_score);
    }
    int sy=20-count;
    if(sy==0){
        printf("无合格打分.\n");
    }
    else {
        double end_aver=sum1/sy;
        printf("最后得分:%.3f分.\n",end_aver);
    }
    return 0;

}

































 

 
