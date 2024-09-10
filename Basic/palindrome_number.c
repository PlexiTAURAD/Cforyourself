#include <Stdio.h>
int main(void){
    int n,t,s,r;
    printf("Enter your number: ");
    scanf("%d", &n);
    t = n;
    s = 0;
    while(n>0)
    {
        r = n%10;
        s = (s*10)+r;
        n = n/10;
    }
    if (t==s)
        printf("%d is a Palindrom number", t);
    else
        printf("%d is not a Palindrom number", t);
return 0;
}