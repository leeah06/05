#include <stdio.h>

int main(void)
{
    int x;
    int num=0;

    printf("input a string :");

    while ((x = getchar()) != '\n') {
        if (x >= '0' && x <= '9')   /* is it between '0' and '9'? */
            num++;
    }

    printf("the number of digits is %d\n", num);

    return 0;
}
