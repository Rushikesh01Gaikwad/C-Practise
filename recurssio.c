#include<stdio.h>
#include<conio.h>

void table(int no, int count);

void main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d", &no);

    table(no, 1);
}

void table(int no, int count)
{
    if(count <= 10)
    {
        printf("%d x %d = %d\n", no, count, no * count);
        table(no, count + 1);
    }
}
