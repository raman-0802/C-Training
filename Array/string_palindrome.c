#include <stdio.h>

#include <string.h>
int main()
{

    int i, len, palindrome = 1;

    char str[] = "MADAM";
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }
    (palindrome) ? printf("palindrome") : printf("not palindrome") ;
           return 0;
}