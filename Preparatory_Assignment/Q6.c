#include<stdio.h>

void accept(int arr[3][3]);
void disp(int arr[3][3]);


int main(void)
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;

    printf("\n Enter 1st array elements : ");
    accept(a);
    printf("\n Enter 2nd array elements : ");
    accept(b);
    printf("\n 1st Array Elements \n");
    disp(a);
    printf("\n 2nd Array Elements \n");
    disp(b);
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++) 
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\n Result Array Elements \n");
    disp(c);
    

   return 0;
}
 void accept(int arr[3][3])
 {
    int i,j;
    for(i=0;i<3;i++)      
    {
        for(j=0;j<3;j++) 
        {
            scanf("%d",&arr[i][j]);
        }
    }
}

void disp(int arr[3][3])
{
    int i,j;
    for(i=0;i<3;i++)  
    {
        for(j=0;j<3;j++) 
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
}
