#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, temp;
	printf("Enter the two values for swappig: \n");
	scanf("%d %d", &a, &b);
	printf("Befor swapping: a = %d, b = %d \n", a, b);
	temp = a;
	a=b;
	b=temp;
	printf("After swapping: a = %d, b = %d", a, b);	
}
