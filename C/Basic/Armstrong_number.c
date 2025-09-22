#include <stdio.h>
#include <math.h>
int main(void){
    int n,t,s,r,dig;
    printf("Enter any number: ");
    scanf("%d", &n);
    t = n;
    s = 0;
    dig = 0;
    /* This is for counting number of digits*/
    int temp = n;
    while(temp>0){
        dig++;
        temp = temp/10;
    }

    while(n>0){
        r = n%10;
        s = s + pow(r,dig);
        n = n/10;
    }
    if(t==s)
        printf("%d is an Armstrong number", t);
    else
        printf("%d is not an Armstrong number", t);
return 0;
}