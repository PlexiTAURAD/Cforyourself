/* \n to move the cursor to the next line
\r to move the cursor to the start of the current line
\t is the horizontal tab which moves the cursor to the next tab
 */
#include <stdio.h>
int main(void){
    printf("Hello, World!");
    printf("\n Hey, World!");
    printf("Hello \r World");
    printf("Hello.. \t World?");
    return 0;
}

