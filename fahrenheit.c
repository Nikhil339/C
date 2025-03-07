#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celsius\n");
    while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32);
        printf("%6.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}