/*Computes pairwise average's of three numbers*/

#include <stdio.h>

double average(double a, double b){
    return (a+b)/2;
}

int main(void){
    double x,y,z;

    printf("Enter three numbers: ");
    scanf("%lg %lg %lg", &x, &y, &z);
    
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", z, x, average(z, x));

    return 0;
}
