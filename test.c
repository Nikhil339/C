#include <stdio.h>
#include <time.h>

int main(void){
    long t = time(NULL);
    printf("%ld", t);
    return 0;
}