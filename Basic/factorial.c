#include <stdio.h>
int main(void){
    int n,f,i;
    printf("Enter any number: ");
    scanf("%d", &n);
    i=n;
    f=1;
    while(i>0){
        f = f*i;
        i--;
    }
    printf("Factorial of %d: %d", n,f);
return 0;
}