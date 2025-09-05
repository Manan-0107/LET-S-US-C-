#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value");
    scanf("%d %d",&a,&b);
    c=(a>b)?a:b;
    printf(" the greatest value is %d",c);
}
