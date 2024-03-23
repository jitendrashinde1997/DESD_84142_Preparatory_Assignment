#include<stdio.h>
int fact();

int main()
{
    int Result = fact();
    printf("Factorial of the number is: %d",Result);
    while(1)
    {
        main();
    }
}

int fact()
{
    int val=1;
    int i,n;
    printf("\nEnter the value: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    val= val*i;
    } 
    return val;  
}
