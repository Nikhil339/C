#include <stdio.h>

int sum(int a[], int n, int *p);

int main(void){
    int N, *p, s;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    int b[N];
    printf("Enter %d numbers: ", N);
    for (int i=0;i<N;i++){
        scanf("%d", &b[i]);
    }
    s = sum(b, N, p);
    printf("The sum is: %d", s);
    return 0;
}

int sum(int a[], int n, int *p){
    int s = 0;
    for (p = &a[0];p<&a[n];p++){
        s += *p;
    }
    return s;
}