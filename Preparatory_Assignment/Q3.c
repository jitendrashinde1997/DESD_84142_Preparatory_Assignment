#include<stdio.h>
int acceptNum();
int calcFib();

int main(){
    int num1=acceptNum();
    int num2=acceptNum();
    calcFib(num1,num2);
    return 0;
}

int acceptNum()
{
    int num;
    printf("\n Enter the number:");
    scanf("%d",&num);
    return num;
}

int calcFib(int a,int b)
{
    int c, i;
    c=a+b;
    printf("Fibonacci Series given by:%d,",a);
    printf("%d,",b);
    printf("%d,",c);
    for(i=1; i<=12; i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d,",c);
    }
    return 0;
}