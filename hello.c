#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);   /* read 3 values with one scanf */

    switch (op) {
    case '+':
        printf("%d%c%d=%d\n", a, op, b, a + b);
        break;
    case '-':
        printf("%d%c%d=%d\n", a, op, b, a - b);
        break;
    case '*':
        printf("%d%c%d=%d\n", a, op, b, a * b);
        break;
    case '/':
        if (b == 0)
            printf("Cannot divide by zero.\n");
        else
            printf("%d%c%d=%d\n", a, op, b, a / b);
        break;
    case '%':
        if (b == 0)
            printf("Cannot divide by zero.\n");
        else
            printf("%d%c%d=%d\n", a, op, b, a % b);
        break;
    default:
        printf("Unsupported operator.\n");
        break;
    }

    return 0;
}