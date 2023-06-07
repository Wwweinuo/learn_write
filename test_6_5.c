#include <stdio.h>
int main()
{
    struct Student
    {
        char name[20];
        int age;
        char id[20];
    };
    struct Student n1 = {"周", 19, "202213140207"};
    printf("%s\n", n1.name);
    printf("%d\n", n1.age);
    printf("%s\n", n1.id);
    return 0;
}
