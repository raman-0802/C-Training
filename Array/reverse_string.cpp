#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ramanjee Mishra";
    int ln= strlen(str);
    for (int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    printf("\nREVERSE\n");
    for(int i=ln-1;i>=0;i--)
    {
        printf("%c\n",str[i]);
    }
    char newstr[20];
    for(int i=0;i<=ln;i++)
    {
        newstr[i]=str[i];
        printf("%c",newstr[i]);
    }
}