#include <stdio.h>
int main(void)
{
    // Day 2 - variables and data types
    int age;
    char gender;
    float cgpa;
    double fav_num;
    char initial;
    int start_year;
    int grad_year;
    int years_left;

    age = 20;
    gender = 'M';
    cgpa = 4.00;
    fav_num = 69.69321;
    initial = 'X';
    start_year = 2026;
    grad_year = 2030;
    years_left = grad_year - start_year;

    printf("\n\t=====CSE=====\n");
    printf("\nMy age is %d\n", age);
    printf("My gender is %c\n", gender);
    printf("My target grade is %.2f\n", cgpa);
    printf("My favourite number is %.5lf\n", fav_num);
    printf("My initial is %c\n", initial);
    printf("I started my journey in %d\n", start_year);
    printf("I will graduate in %d\n", grad_year);
    printf("I have %d years left to graduate\n", years_left);

    printf("\n\t=====Data Type Sizes=====\n");
    printf("\nInteger size: %zu bytes\n", sizeof(int));
    printf("Float size: %zu bytes\n", sizeof(float));
    printf("Double size: %zu bytes\n", sizeof(double));
    printf("Character size: %zu byte\n", sizeof(char));

    printf("\n\t=====End of Day 2=====\n");

    return 0;
}
