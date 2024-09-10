#include <stdio.h>
int main(void){
    int r,i;
    printf("Enter the range you wish to print numbers till: ");
    scanf("%d",&r);
    i = 1;
    while(i <= r)
    {
        if (i%2 == 0)
        printf("%d\t",i);
        i++;
    }
return 0;
}