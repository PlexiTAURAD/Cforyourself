#include <stdio.h>
int main(void){
    int a,b,c;
    char x;
    printf("Enter two values: ");
    scanf("%d%d", &a, &b);
    while (getchar() != '\n');
    printf("\n aA sS dD pP");
    printf("\n\nEnter your choice: ");
    scanf("%c", &x);
    switch(x){
        case 'a':
        case 'A':
        printf("\nSum of %d and %d: %d", a,b,a+b);
        break;
        case 's':
        case 'S':
        printf("\nThe difference between %d and %d is: %d",a,b,c);
    if(a>b){
        c = a-b;
        printf("\nThe difference between %d and %d: %d",a,b,c);
    }
    else{
        c = b-a;
        printf("\nThe difference between %d and %d: %d",b,a,c);
    }
    break;
        case 'd':
        case 'D':
    if (a>b)
        c = a/b;
    else    
        c = b/a;
    printf("\nThe quotient: %d", c);
    break;
        case 'p':
        case 'P':
        printf("\n The product of %d and %d: %d",a,b,a*b);
        break;
    }
return 0;
}