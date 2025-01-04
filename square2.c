/*printing square of numbers using for loop*/

#include <stdio.h>

int main(void){
    int i, n;

    printf("Enter the number of entries: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i*i);
    }

    return 0;
}