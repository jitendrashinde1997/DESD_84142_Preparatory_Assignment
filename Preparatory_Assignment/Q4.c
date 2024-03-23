#include<stdio.h>
int acceptNum();
void average();
void total();

int main()
{
    int num;
    num=acceptNum();
    int sub1=num;
    num=acceptNum();
    int sub2=num;
    num=acceptNum();
    int sub3=num;
    num=acceptNum();
    int sub4=num;
    num=acceptNum();
    int sub5=num;
    average(sub1,sub2,sub3,sub4,sub5);
    total(sub1,sub2,sub3,sub4,sub5);
    return 0;
}

int acceptNum()
{
    int n;
    printf("\nEnter the subject mark:");
    scanf("%d",&n);
    if(n>20)
    {
        printf("\nMarks can't be greater than 20");
        acceptNum();
    }
    else{
        return n;
    }  
}

void average(int a,int b,int c,int d,int e)
{
    int Avg=(a+b+c+d+e)/5;
    printf("\nAverage of all subject:%d",Avg);
}

void total(int a,int b,int c,int d,int e)
{
    int Tot=a+b+c+d+e;
    printf("\nTotal Marks:%d",Tot);
    if(Tot>=90)
    {
        printf("\nGarde: Excellent");
    }
    else if (Tot<90 && Tot>=80)
    {
        printf("\nGrade: A");
    }
    else if (Tot<80 && Tot>=70)
    {
        printf("\nGrade: B");
    }
    else if (Tot<70 && Tot>=60)
    {
        printf("\nGrade: C");
    }
    else if (Tot<60)
    {
        printf("\nGrade: F");
    }
    
}
