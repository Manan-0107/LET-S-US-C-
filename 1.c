#include<stdio.h>
int main()
{
    int cost_price,selling_price,net;
    printf("enter the cost price");
    scanf("%d",&cost_price);
    printf("enter the selling price");
    scanf("%d",&selling_price);
    net=selling_price-cost_price;
    if (net<0){
        printf("the shopkeeper has incureed loss");
    }
    else if(net>0){
        printf("the shopekeeper has incurred profit");
    }
    else{
        printf("no profit/loss");
    };

    return 0;
}