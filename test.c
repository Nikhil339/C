#include <stdio.h>

#define RATIO (4.0f/3.0f)
#define PI 3.14f

int main(void){
    int radius;
    float volume;

    radius = 10;

    volume = RATIO*PI*radius*radius*radius;

    printf("The volume of the sphere is: %.f\n", volume);
    return 0;
}