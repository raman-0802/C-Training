#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";  
    int i;

    for (i = 0; i < 5; i++) {
        str[strlen(str) - 1] = 'c' + i;  
        printf("%s\n", str);
    }
}