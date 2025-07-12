#include <stdio.h>
#include <string.h>
int main() {
    char *s="devara";
    char *p="devar";
    int flag=1;
    if (strlen(s) == strlen(p))
    {
        for (int i = 0;i < strlen(s); i++)
        {
            if (s[i]!=p[i])
            {
                flag==0;
            }
            
        }
        if (flag==1)
        {
            printf("Same");
        }
    }
    else
    {
        printf("Not same\n");
    }
    
    
    return 0;
} 
