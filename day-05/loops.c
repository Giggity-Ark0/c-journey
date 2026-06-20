#include <stdio.h>
int main(void)
{
    /* ===== for loop ===== */
    printf("\n\t===== for loop =====\n");
    for (int n = 1; n <= 5; n++)
    {
        printf("n = %d\n", n);
    }
    /* ===== while loop ===== */
    printf("\n\t===== while loop =====\n");
    int i = 1;
    while (i <= 5)
    {
        printf("i = %d\n", i);
        i++;
    }
    /* ===== do-while loop ===== */
    printf("\n\t===== do-while loop =====\n");
    int j = 1;
    do
    {
        printf("j = %d\n", j);
        j++;
    } while (j <= 5);
    /* ===== do-while: runs even when condition is false ===== */
    printf("\n\t===== do-while (condition false from start) =====\n");
    int k = 10;
    do
    {
        printf("k = %d (ran once even though k > 5)\n", k);
        k++;
    } while (k <= 5);
    /* ===== for loop countdown ===== */
    printf("\n\t===== for loop countdown =====\n");
    for (int n = 5; n >= 1; n--)
    {
        printf("n = %d\n", n);
    }
    /* ===== break ===== */
    printf("\n\t===== break =====\n");
    for (int n = 1; n <= 10; n++)
    {
        if (n == 5)
            break;
        printf("n = %d\n", n);
    }
    /* ===== continue ===== */
    printf("\n\t===== continue =====\n");
    for (int n = 1; n <= 5; n++)
    {
        if (n == 3)
            continue;
        printf("n = %d\n", n);
    }
    /* ===== nested loops ===== */
    printf("\n\t===== nested loops =====\n");
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            printf("row=%d col=%d\n", row, col);
        }
    }
    return 0;
}