/*calculates the number of digits in an integer*/

#include <stdio.h>

int main(void){
    int digits = 0, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).", digits);
    return 0;
}