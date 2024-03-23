#include<stdio.h>

int main ()
{
    char n;
    printf("Enter Your Input:");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    {
        printf("Entered input is Upper case\n");
    }
    if(n>=97 && n<=122) 
    {
        printf("Entered input is Lower case\n");
    }
    if(n>=48 && n<=57) 
    {
        printf("Entered input is Number\n");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}
