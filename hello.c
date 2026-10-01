#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer :");
    scanf("%d", &x);


    if (x<0)
        x= -x;
    

    printf("absolute value: %d\n", x);
    return 0;
}