#include <stdio.h>

int main(void)
{
    int score = 72;
    int age = 20;
    int day = 3;
    int x = 10;

    /* ===== if / else ===== */
    printf("\n\t===== if / else =====\n");

    if (score >= 50)
        printf("Score %d: Pass\n", score);
    else
        printf("Score %d: Fail\n", score);

    /* ===== else if chain ===== */
    printf("\n\t===== else if (Grade) =====\n");

    if (score >= 90)
        printf("Grade: A\n");
    else if (score >= 80)
        printf("Grade: B\n");
    else if (score >= 70)
        printf("Grade: C\n");
    else if (score >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    /* ===== Nested if ===== */
    printf("\n\t===== Nested if =====\n");

    if (age >= 18)
    {
        if (score >= 50)
            printf("Adult and passed.\n");
        else
            printf("Adult but failed.\n");
    }
    else
    {
        printf("Not an adult yet.\n");
    }

    /* ===== switch ===== */
    printf("\n\t===== switch =====\n");

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    default:
        printf("Weekend\n");
        break;
    }

    /* ===== = vs == live demo ===== */
    printf("\n\t===== = vs == bug =====\n");

    if ((x = 10))
        printf("BUG:  x = 10 assigns 10, always true. x is now: %d\n", x); // 10 is non-zero, so condition is true

    if (x == 10)
        printf("FIX:  x == 10 compares correctly. x is: %d\n", x);

    return 0;
}