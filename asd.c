#include <stdio.h>                       //有点问题
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2],i,j;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d",a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//第一次提交
