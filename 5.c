#include<stdio.h>
int main (){
    int i,a;
    printf("enter the value");
    scanf("%d",&a);
    if (a==2){
            printf("the no %d is prime",a);
        };
    for (i=2;i<a;i++){
        
        if (a%i==0){
            printf("the no %d is not prime",a);
            break;
        }
        else if (i<(a-1)){
            continue;
        }
        else{
            printf("the no %d is prime",a);
        }
    }
}
