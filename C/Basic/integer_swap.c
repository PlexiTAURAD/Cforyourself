#include <stdio.h>
int main(void){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nValue of a: %d",a);
    printf("\nValue of b: %d",b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter swap");
    printf("\nValue of a: %d",a);
    printf("\nValue of b: %d",b);
return 0;
}