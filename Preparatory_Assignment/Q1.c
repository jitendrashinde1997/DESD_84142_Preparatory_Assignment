#include<stdio.h>
int main()
{
   int n1,n2;
   printf("Enter the First Number:");
   scanf("%d",&n1);
   printf("Enter the second Number : ");
   scanf("%d",&n2);
   
   if(n1>n2)
      printf("The maximum number is : %d \n",n1);
	  else
	     printf("The maximum number is : %d \n",n2);

   return 0;

}

