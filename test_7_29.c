#include <stdio.h>
int main()
{
    int num = 0;
    int count = 0;
    int a = 1;
    scanf("%d", &num);
    for(int i = 0; i < 32; i++)
    {
        if(num & a == 1)
        {
            count++;
        }
        num = num >> 1;
    }
    printf("%d", count);
    return 0;
}