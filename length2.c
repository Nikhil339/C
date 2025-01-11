/*determines the length of message*/

#include <stdio.h>

int main(void){
    int len = 0;

    printf("Enter message: ");

    while (getchar()!='\n') 
        len++;
    printf("The length of the message: %d\n", len);
    return 0;
}