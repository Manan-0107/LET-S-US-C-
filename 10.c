#include<stdio.h>
int main(){
    char a[6];
    char transverse_name[6];
    int i ;
    printf("enter the name");
    scanf("%s",&a);
    for(i=4;i>=0;i--){
       transverse_name[4-i]=transverse_name[4-i]+a[i];
    }
    printf("%s",transverse_name);

}
