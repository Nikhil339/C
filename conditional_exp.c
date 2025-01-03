/*other way of using if statements - conditional statements*/

#include <stdio.h>

int main(void){
    int i, j, k;

    i = 1;
    j = 2;
    k = i>j?i:j; /*if i is greater than j then k=i else k=j*/
    printf("%d\n", k);
    k = (i>=0?i:0) + j;
    printf("%d\n", k);

    return 0;
}