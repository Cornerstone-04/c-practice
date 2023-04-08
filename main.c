#include <stdio.h>

int main()
{
    int age;
    char name[50];

    printf("Enter name:");
    scanf("%s", &name);

    printf("Enter age:");
    scanf("%d", &age);

    printf("%s is %d", name, age);
}