#include<stdio.h>
int main(){
    int Class,qualificaton,year_service;
    printf("enter the class");
    scanf("%d",&Class);
    printf("enter the qualification 0 for graduate and 1 for post-gradutae");
    scanf("%d",&qualificaton);
    printf("enter the year service");
    scanf("%d",&year_service);

    if (Class>8){
        if (qualificaton==1 && year_service>=10){
            printf("%d",15000);
        }
        else if (qualificaton==0 && year_service>=10){
            printf("%d",10000);
        }
        else if (qualificaton==1 && year_service<10){
            printf("%d",11000);
        }
        else {
            printf("%d",7000);
        };
    }
    else{
        if (qualificaton==1 && year_service>=10){
            printf("%d",12000);
        }
        else if (qualificaton==0 && year_service>=10){
            printf("%d",9000);
        }
        else if (qualificaton==1 && year_service<10){
            printf("%d",10000);
        }
        else {
            printf("%d",6000);
        };
    }

}
