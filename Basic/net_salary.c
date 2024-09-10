#include <stdio.h>
int main(void){
    int basic, insure, gross, net;
    float da,hra,pf;
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    da = basic*0.20;
    hra = basic*0.15;
    gross = basic+da+hra;
    insure = 500;
    pf  =basic*0.12;
    net = gross-(insure+pf);
    printf("\n Basic salary         : %d",basic);
    printf("\n Dearness allowance   : %f",da);
    printf("\n HRA                  : %f",hra);
    printf("\n Insurance            : %d",insure);
    printf("\n Provident fund       : %f",pf);
    printf("\n Gross salary         : %d",gross);
    printf("\n Net salary           : %d",net);
return 0;
}