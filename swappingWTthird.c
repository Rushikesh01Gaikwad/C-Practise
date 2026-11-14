#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("Enter the two values for swappig: \n");
	scanf("%d %d", &a, &b);
	printf("Befor swapping: a = %d, b = %d \n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
	a = a * b;
	b = a / b;
	a = a / b;
	printf("After swapping: a = %d, b = %d", a, b);	
}
