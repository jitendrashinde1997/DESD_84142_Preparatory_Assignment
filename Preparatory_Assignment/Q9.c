#include<stdio.h>

void printBinary(int num);
void printOctal(int num);
void printHexadecimal(int num);

void printBinary(int num) 
{
    if (num > 1) 
        printBinary(num / 2);
 
    printf("%d", num % 2);
}

void printOctal(int num) 
{
    if (num != 0) 
	{
        printOctal(num / 8);
        printf("%d", num % 8);
    }
}


void printHexadecimal(int num) 
{
    if (num != 0) 
	{
        printHexadecimal(num / 16);
        int remainder = num % 16;

        if (remainder < 10)
            printf("%d", remainder); 
		else 
            printf("%c", 'A' + remainder - 10);
    }
}

int main() 
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Given Number: %d\n", num);
    printf("Binary equivalent: ");
    printBinary(num);
    printf("\n Octal equivalent: ");
    printOctal(num);
    printf("\n Hexadecimal equivalent: ");
    printHexadecimal(num);
	printf("\n\n ");
	printf("Octal conversion : %o \n", num);
	printf("Hex conversion : %x \n", num);

	return 0;

}



