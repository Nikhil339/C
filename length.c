/*determines the length of a word*/

#include <stdio.h>

int main(void){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n'){
        len++;
        ch = getchar();
    }
    
    printf("Length of the message is: %d\n", len);
    return 0;
}