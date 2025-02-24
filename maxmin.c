/*finding maximum and minimum number using pointers*/

#include <stdio.h>

#define N 10

int *max_min(int a[], int n, int *max, int *min);

int main(void){
    int b[N], big, small;

    printf("Enter %d numbers: ", N);
    for (int i = 0; i<N; i++)
        scanf("%d", &b[i]);

    max_min(b, N, &big, &small);
    
    printf("Largest number: %d\n", big);
    printf("Smallest nubmer: %d", small);
}

int *max_min(int a[], int n, int *max, int *min){
    *max = *min = a[0];
    for (int i = 1; i<n; i++)
        if (a[i]>*max)
            *max = a[i];
        else if (a[i]<*min)
            *min = a[i];
}
