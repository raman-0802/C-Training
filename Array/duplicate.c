#include <stdio.h>

#include <string.h>
int main()
{

    int i, len, palindrome = 1;

    char str[] = "helloworld";
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }
    (palindrome) ? printf("palindrome\n") : printf("not palindrome\n") ;
int dupli=0;

    for(int i=0 ;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
            printf("%c ",str[i]) ;   
            dupli++;
            break;
            }
   
        }
    }
    printf("\nduplicate count = %d",dupli);
           return 0;
}