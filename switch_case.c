/*using switch case instead of cascading if else*/

#include <stdio.h>

int main(void){
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    switch (grade){
        case 4: case 3: case 2: case 1:
            printf("Passing");
            break;
        case 0:
            printf("Failing");
            break;
        /*case 4: printf("Excellent");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;*/
        default: printf("Invalid grade");
                break;
    }
    return 0;
}