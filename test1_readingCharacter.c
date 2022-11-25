#include <stdio.h>

int main(){

    char c1;

    printf("Please enter a character : ");
    scanf("%c", &c1);

    printf("The character (%c) has the value %d", c1, c1);

    return 0;


    // EOF means "END OF FILE  EOF == -1"
    // EOF indicator is entered by typing Command+D


}