#include <stdio.h>
int main(void){
    int n,i,s;
    printf("Enter any number: ");
    scanf("%d",&n);
    i = 1;
    s = 0;
    while(i<n){
        if(n%i==0)
            s = s+i;
        i++;
    }
    if(s==n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
return 0;
}