/*printing the sum of series of nubmers*/

#include <stdio.h>

int main(void){
    long n, sum = 0;

    printf("Enter series of numbers (0 to terminate): ", n);
    scanf("%ld", &n);

    while (n != 0){
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n", sum);
    return 0;
}