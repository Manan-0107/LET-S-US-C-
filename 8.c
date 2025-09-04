#include <stdio.h>
int main() {
    int a[2][2],b[2][2],c[2][2],i, j;
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf ("enter the value ");
            scanf("%d %d",&a[i][j], &b[i][j]) ;
            c[i][j]=a[i][j]+b[i][j];
            
        }
           

    }
    printf ("the value is %d\n",c[1][1]);
    printf ("the value is %d\n",c[0][0]);
    printf ("the value is %d\n",c[0][1]);
    printf ("the value is %d\n",c[1][0]);
    
    

    return 0;
}
