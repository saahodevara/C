#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char s[] = "devara";
    //Direct copy
    char *p =s;
    p[0] ='s';
    printf("%s\n",s);
    printf("%s\n",p);
    
    char ns[]="saaho";
    //malloc is used to assign memory for the new array and thrn copy each element into different locations
    char *np=malloc(strlen(ns)+1);
    for (int i = 0, n=strlen(ns); i<=n; i++)
    {
        np[i]=ns[i];
    }
    np[0]='d';
    printf("%s\n",ns);
    printf("%s\n",np);
    
    
    return 0;
}
