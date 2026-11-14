#include<stdio.h>
#include<conio.h>
void main()
{
	int flag = 1, i = 2, no, rem;
	printf("Enter the number to check prime or not:\n");
	scanf("%d", &no);
	while (i < no)
	{
		rem = no % i;
		if (rem == 0)
		{
			flag = 0;
			break;
		}
		i++;
	}
	
	if(flag)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Not a prime");
	}
}

// prime number is a natural number gretter than 1 and it ha only 2 factors divisible by 1 and itself
