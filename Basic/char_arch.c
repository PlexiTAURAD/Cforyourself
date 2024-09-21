#include <stdio.h>
#include <string.h>
int main(void){
    int p,q,r,s;
    char ch[10];
    printf("Enter any string: ");
    scanf("%s", ch);
    r=strlen(ch);
    for(p=0;p<r;p++){
        for(q=0;q<r-p;q++)
        printf("%c ",ch[q]);
    }
}