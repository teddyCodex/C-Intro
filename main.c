#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[25];
    int age;
    char grade;
    double GPA;

    // printf("Please enter your name:\n");
    // scanf("%s", name);
    // printf("Please enter your age:\n");
    // scanf("%d", &age);
    // printf("Please enter a grade:\n");
    // scanf(" %c", &grade); // There is a \n left in the input buffer from previous scanf. Use " %c".
    // printf("Please enter your GPA:\n");
    // scanf("%lf", &GPA);

    // printf("User Data:\n Name: %s \n Age: %d \n grade: %c GPA: %f \n", name, age, grade, GPA);

    char *s = "Hello World!";
    printf("%s", s);
}