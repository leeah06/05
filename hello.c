#include <stdio.h>

int main(void)
{
    int answer = 59;   /* answer */
    int guess;
    int trials = 0;    /* number of trials */

    do {
        printf("Guess a number :");
        scanf("%d", &guess);
        trials++;

        if (guess < answer)
            printf("low!\n");
        else if (guess > answer)
            printf("high!\n");
    } while (guess != answer);

    printf("Congratulation! trials:%d\n", trials);

    return 0;
}