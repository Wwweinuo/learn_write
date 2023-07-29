#include <stdio.h>
int main()
{
    int lenth = 0;
    char x[101],y[101];
    char z[101];
    scanf("%d", &lenth);
    scanf("%s", x);
    scanf("%s", y);
    int i;
    for(i = 0; i < lenth; i++)
    {
        if(x[i] < y[i])
            break;
        else
            z[i] = y[i];
    }
    z[i] = "\0";
    if(i == lenth)
    {
        printf("%s", z);
    }
    else
    {
        printf("-1");
    }
    return 0;
}