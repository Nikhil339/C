/* prints a table of square numbers*/

#include <stdio.h>

int main(void){
    int i, n;

    printf("Enter the number of entries: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i*i);
        i++;
    }
    return 0;
}