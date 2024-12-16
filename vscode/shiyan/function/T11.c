#include<stdio.h>
int ISValidDate(int year,int month,int day);
int dayinmonth(int year,int month);
int IS_Nyear(int year);
int main(void){
    int year,month,day;
    scnaf("%d %d %d",&year,&month,&day);
    if(ISValidDate){
        printf("YES");
    }
    else {
        printf("NO");
    }
}
int ISValidDate(int year,int month,int day){
    if(year<0||month<0||month>12||day<1){
        return 0;
    }
    int maxday=dayinmonth(year,month);
    if(day>maxday){
        return 0;
    }
    return 1;
}
int dayinmonth(int year,int month){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month==2&&IS_Nyear){
        return 29;
    }
    else {
        return days[month-1];
        }
}
int IS_Nyear(int year){
    if((year%4==0&&year%100!=0)||(year%400==0)){
        return 1;
    }
    else {
        return 0;
    }
}