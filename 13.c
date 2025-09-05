#include<stdio.h>
int main(){
    int hardness,tensile_strength;
    float carbon_content;
    printf("enter the hardness");
    scanf("%d",&hardness);
    printf("enter the tensile strength");
    scanf("%d",&tensile_strength);
    printf("enter the carbon content");
    scanf("%f",&carbon_content);
    if (hardness>10 && carbon_content<0.7 && tensile_strength >5600){
        printf("the grade is %d",10);
    }
    else if(hardness>10 && carbon_content < 0.7) {
        printf("the grade is %d",9);
    }
    else if(tensile_strength>5600 && carbon_content < 0.7) {
        printf("the grade is %d",8);
    }
    else if(hardness>10 && tensile_strength > 5600) {
        printf("the grade is %d",7);
    }
    else if(hardness>10 || carbon_content < 0.7 || tensile_strength>5600) {
        printf("the grade is %d",6);
    }
    else{
        printf("the grade is %d",5);
    }
}
