#include <stdio.h>


int main()
{
   int a,i,count_pos=0,count_neg=0,count_zeroes=0;
   for(i=0;i<200;i++){
    printf("enter the no");
    scanf("%d",&a);
    if(a>0){
        count_pos+=1;
    }
    else if (a<0){
        count_neg+=1;
    }
    else{
        count_zeroes+=1;
    };
   }
   printf("the no of positive value is %d\n",count_pos);
   printf("the no of negative value is %d\n",count_neg);
   printf("the no of zeroes value is %d\n",count_zeroes);


    return 0;
}
