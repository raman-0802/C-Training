// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - 1 - i];
//         str[len - 1 - i] = temp;
//     }

//     printf("Reversed string: %s\n", str);
//     return 0;
// }
#include <stdio.h>

int main() {
    char str[] = "hello";
    int i = 0, len = 0;

     while (str[len] != '\0') len++;

    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("%s\n", str);
    return 0;
}
