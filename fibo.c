#include<stdio.h>
#include<conio.h>
void main()
{
	 int f1 = 0, f2 = 1, fib, i, no;
	 printf("Enter the number of iteration:\n");
	 scanf("%d", &no);
	 printf("%d %d", f1, f2);
	 for(i = 1; i < no; i++)
	 {
	 	fib = f1 + f2;
	 	f1 = f2;
	 	f2 = fib;
		printf(" %d", fib); 
	 }
	 
}
