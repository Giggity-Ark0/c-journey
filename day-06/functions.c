#include <stdio.h>

/* ===== prototypes ===== */
int add(int a, int b);
int multiply(int a, int b);
int max(int a, int b);
void print_separator(void);
void pass_by_value_demo(int x);
void countdown(int start);

int main(void)
{
    /* ===== add ===== */
    printf("\n\t===== add =====\n");
    int result = add(3, 4);
    printf("add(3, 4) = %d\n", result);

    print_separator();

    /* ===== multiply ===== */
    printf("\n\t===== multiply =====\n");
    printf("multiply(6, 7) = %d\n", multiply(6, 7));

    print_separator();

    /* ===== max ===== */
    printf("\n\t===== max =====\n");
    printf("max(10, 25) = %d\n", max(10, 25));
    printf("max(99, 42) = %d\n", max(99, 42));

    print_separator();

    /* ===== pass-by-value ===== */
    printf("\n\t===== pass-by-value =====\n");
    int a = 5;
    printf("a before call: %d\n", a);
    pass_by_value_demo(a);
    printf("a after call:  %d\n", a);

    print_separator();

    /* ===== countdown via function ===== */
    printf("\n\t===== countdown =====\n");
    countdown(5);

    return 0;
}

/* ===== definitions ===== */
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void print_separator(void)
{
    printf("----------\n");
}

void pass_by_value_demo(int x)
{
    x = 999;
    printf("x inside function: %d\n", x);
}

void countdown(int start)
{
    for (int i = start; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    printf("Go!\n");
}