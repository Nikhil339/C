/*calculates the sum of series of integers*/

#include <stdio.h>

int main(void){
    int n, sum = 0;

    printf("Enter the series of numbers (0 to terminate): ");

    scanf("%d",&n);
    while (n != 0){
        sum += n;
        scanf("%d", &n);
    }

    printf("The sum of the numbers is: %d", sum);
    return 0;
}