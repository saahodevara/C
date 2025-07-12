#include <stdio.h>
#include <string.h>
int main() {
    char *s="Github";
    for (int i = 0;i < strlen(s); i++)
    {
        printf("%s\n",s+i);   
    }
    return 0;
} 
