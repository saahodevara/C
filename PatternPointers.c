#include <stdio.h>
#include <string.h>
int main() {
    char *s="Github";
    // s holds the address of the first character
    for (int i = 0;i < strlen(s); i++)
    {
        // in this we are working on the pointer arithmetics by changing the starting position to next
        printf("%s\n",s+i);   
    }
    return 0;
} 
