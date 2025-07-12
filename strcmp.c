#include <stdio.h>

int getLength(char *s);

int main() {
    char *s = "devara";
    char *p = "devar";
    int flag = 1;

    if (getLength(s) == getLength(p)) {
        for (int i = 0; i < getLength(s); i++) {
            if (s[i] != p[i]) {
                flag = 0;
                break; 
            }
        }

        if (flag == 1) {
            printf("Same\n");
        } else {
            printf("Not same\n");
        }
    } else {
        printf("Not same\n");
    }

    return 0;
}

int getLength(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}
