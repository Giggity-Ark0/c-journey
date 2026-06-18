#include <stdio.h>

int main(void)
{
    /* Day 3 - Operators and Expressions */

    const int a = 15, b = 4;
    const double x = 15.0, y = 4.0;
    int c = 10;
    int d = 5;

    /* Arithmetic Operators */
    printf("\n\t===== Arithmetic Operators =====\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    /* Division: Integer vs Floating-point */
    printf("\n\t===== Division: Integer vs Floating-point =====\n");
    printf("Integer division:        %d / %d = %d\n", a, b, a / b);
    printf("Floating-point division: %.2lf / %.2lf = %.4lf\n", x, y, x / y);

    /* Compound Assignment Operators */
    printf("\n\t===== Compound Assignment Operators =====\n");
    printf("c starts as: %d\n", c);
    c += 5;
    printf("After c += 5:  %d\n", c);
    c -= 3;
    printf("After c -= 3:  %d\n", c);
    c *= 2;
    printf("After c *= 2:  %d\n", c);
    c /= 4;
    printf("After c /= 4:  %d\n", c);
    c %= 3;
    printf("After c %%= 3: %d\n", c);

    /* Increment and Decrement Operators */
    printf("\n\t===== Increment and Decrement Operators =====\n");

    /* pre-increment — safe way: modify first, then print */
    ++d;
    printf("Pre-increment:  d = %d\n", d);

    /* post-increment — safe way: print first, then modify */
    printf("Post-increment: d = %d\n", d);
    d++;
    printf("d after d++:    d = %d\n", d);

    /* reset for decrement */
    d = 5;
    printf("\nReset: d = %d\n", d);

    /* pre-decrement */
    --d;
    printf("Pre-decrement:  d = %d\n", d);

    /* post-decrement */
    printf("Post-decrement: d = %d\n", d);
    d--;
    printf("d after d--:    d = %d\n", d);

    /* Relational Operators */
    printf("\n\t===== Relational Operators =====\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);
    printf("%d >  %d is %d\n", a, b, a > b);
    printf("%d <  %d is %d\n", a, b, a < b);
    printf("%d >= %d is %d\n", a, b, a >= b);
    printf("%d <= %d is %d\n", a, b, a <= b);

    /* Logical Operators */
    printf("\n\t===== Logical Operators =====\n");
    printf("(a > 10 && b < 10) = %d\n", (a > 10 && b < 10));
    printf("(a > 20 || b < 10) = %d\n", (a > 20 || b < 10));
    printf("!(a == b)          = %d\n", !(a == b));

    /* Ternary Operator */
    printf("\n\t===== Ternary Operator =====\n");
    printf("Larger value: %d\n", (a > b) ? a : b);
    printf("a is %s\n", (a % 2 == 0) ? "even" : "odd");
    printf("b is %s\n", (b % 2 == 0) ? "even" : "odd");

    return 0;
}