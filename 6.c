#include<stdio.h>
int main(){
    int i,count_boys=0,count_girls=0;
    char code;
    for (i=0;i<50;i++){
        printf("enter the code M/F M for male and F for female");
        scanf(" %c",&code);
        if (code =='M'){
            count_boys+=1;
        }
        else  if(code =='F') {
            count_girls+=1;
        }
        else{
            printf("invalid choice");
        }
    }
    printf("the no of boys is %d",count_boys);
    printf("the no of girls is %d",count_girls);
    
}
