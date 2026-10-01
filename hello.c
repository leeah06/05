#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer :");
    scanf("%d", &x);


    if (x>0)
        printf("It is a positive number.\n");
    else if (x<0)
        printf("It is a negative number.\n");
    else
        printf("It is zero.\n");
    return 0;
}