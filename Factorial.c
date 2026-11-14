#include<stdio.h>
#include<conio.h>
void main()
{
	int no, i, f = 1;
	printf("Enter the number to calculate the factorial: \n");
	scanf("%d", &no);
	for(i = no; i > 0; i--)
	{
		f = f * i;
	}
	printf("Factorial is %d", f);
	
	// we can mulitply the number until 1 without loosing reminder.
}
