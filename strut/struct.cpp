#include<stdio.h>
#include<string.h>
struct address

{
    
    int PINCODE;
};
struct student

{
    char name[50];
    int roll_no;
    int age;
    struct address s2;
    
};


int main()
{
    student s1;
    s1.age=15;
    s1.roll_no=84;
    strcpy(s1.name,"RAMANJEE") ;  
    address s2;
    s1.s2.PINCODE=888;
    printf("%d\n",s1.age);
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    printf("%d\n",s1.s2.PINCODE);
    


}
    