#include <stdio.h>
int main(void){
    int m1,m2,m3,m4,m5,m6,total;
    char result,grade,name[15];
    float avg;
    printf("Enter student name: ");
    scanf("%s",name); /* no need to use &name as the array itself represents the address of the first element*/
    printf("\n Enter 6 marks: ");
    scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
    total = m1+m2+m3+m4+m5+m6;
    avg = total/6;
    if(avg>40){
        result = 'p';
        if(avg>75)
            grade = 'a';
        else if (avg>60 && avg<=75)
            grade='b';
        else if(avg>50 && avg<=60)
            grade = 'c';
        else
            grade = 'd';
    }
    else
        result = 'f';
    printf("\n Student name    : %s",name);
    printf("\n Marks           : ");
    printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",m1,m2,m3,m4,m5,m6);
    printf("\nAverage marks    : %f", avg);
    if(result == 'p')
        printf("\nResult           : pass");
    else
        printf("\nResult           : fail");
    printf("\nGrade            : %c",grade);
return 0;

}