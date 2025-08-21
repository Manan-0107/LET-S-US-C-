#include<stdio.h>
int main(){
    int year,day;
    printf("enter the year");
    scanf("%d",&year);
    day = year%7;
    if (day==0){
        printf("Monday");
    }
    else if(day==1) {
        printf("Tuesday");
    }
    else if(day==2) {
        printf("Wednesday");
    }
    else if(day==3) {
        printf("Thursday");
    }
    else if(day==4) {
        printf("Friday");
    }
    else if(day==5) {
        printf("Saturday");
    }
    
    
    else{
        printf("Sunday");
    }






} 