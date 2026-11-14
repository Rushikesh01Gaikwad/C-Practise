#include<stdio.h>

int main()
{
    int count = 0, no;

    printf("Enter the number to calculate its count:\n");
    scanf("%d", &no);

    while(no != 0)
    {
        no = no / 10;
        count++;
    }

    printf("No of digit is: %d", count);

    return 0;
}
