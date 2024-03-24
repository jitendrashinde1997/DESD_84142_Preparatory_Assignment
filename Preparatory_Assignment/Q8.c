#include<stdio.h>

struct Student
{
    char name;
    int rollno;
    int marks;
   
};

int main(void)
{
    struct Student s1;
    s1.name='G';
    s1.rollno=10;
    s1.marks =90;
    printf("S1 Record \n %c \n %d \n %d \n",s1.name,s1.rollno,s1.marks);

    return 0;
}
