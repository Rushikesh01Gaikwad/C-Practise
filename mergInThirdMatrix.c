#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5], b[5], c[10];
    int i;

    printf("Enter the first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(i = 0; i < 5; i++)
    {
        c[i + 5] = b[i];
    }

    printf("Merged array is:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    getch();
}
