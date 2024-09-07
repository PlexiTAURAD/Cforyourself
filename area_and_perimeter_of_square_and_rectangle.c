#include <stdio.h>
int main(void){
    int a,l,b;
    float pi=3.14;
    printf("Enter the side of your square: ");
    scanf("%d", &a);
    printf("\nThe area of your square is: %d", a*a);
    printf("\nThe perimeter of your square: %d", 4*a);
    printf("\nEnter length and breadth of your rectangle: ");
    scanf("%d%d", &l,&b);
    printf("\nThe area of your rectangle is: %d", l*b);
    printf("\nThe perimeter of your rectangle is: %d", 2*(l+b));
    return 0;
}