#include <stdio.h>
int main(void){
    int n,i,k;
    printf("Enter any number: ");
    scanf("%d", &n);
    i = 1;
    k = 0;
    while(i<=n){
        if (n%i==0)
            k=k+1;
        i++;
    }
    if(k==2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
return 0;
}