#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for(int num = a; num <= b; num++)
        for(int n1 = 0; n1 <=b; n1++)
            for(int n2 = n1; n2 <= b; n2++)
            {
                if(num == n2*n2 - n1*n1)
                    count++;
            }
    printf("%d",count);
    return 0;
}