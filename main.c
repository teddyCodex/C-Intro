#include <stdio.h>
#include <stdlib.h>

// %d - print an integer
// %s - print a string
// %f - print a decimal
// %c - print a single character

// Usage below

int main()
{
    char StudentName[] = "Lucas Bankole";
    int StudentAge = 20;
    float cgpa = 4.9;
    char grade = 'A';

    printf("The Valedictorian of the year is %s. \n At %d, he scored an %c in all his courses and graduated with a cgpa of %f!", StudentName, StudentAge, grade, cgpa);
}