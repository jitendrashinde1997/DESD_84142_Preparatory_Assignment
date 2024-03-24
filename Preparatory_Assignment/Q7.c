#include<stdio.h>
int main()
{
   int n,i,res;
   printf("Enter the number : \n");
   scanf("%d",&n);

   for (i = 1; i <= 10; i++)
   {
      res = n * i;
	printf("Table : %d \n",res);

   }
   return 0;

}
