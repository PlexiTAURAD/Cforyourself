#include <stdio.h>
int main(void){
    int i,j,r,t;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    t = 0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(t%2==0)
                printf("0");
            else
                printf("1");
            t++;
        }
        printf("\n");
    }
return 0;
}