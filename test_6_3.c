// #include <stdio.h>
// int main()
// {
//     FILE *fp;
//     fp = fopen("test_6_3.c","r");
//     char ch;
//     if (fp == NULL)
//     {
//         printf("cannot open file\n");
//         exit(0);
//     }
//     while (ch != EOF)
//     {
//         ch = fgetc(fp);
//         putchar(ch);
//     }
//     fclose(fp);
//     return 0;
// }



#include <stdio.h>
int main()
{
    int arr[10] = { 0 };
    char *p = arr;
    for (int i = 0; i < 10; i++)
    {
        *(p + i) = 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}