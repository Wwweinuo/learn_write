#include <stdio.h>
int main()
{
    //录入
    int n, m, x, y;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    int area[100][4] = {0};
    int coord[100][2] = {0};
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &area[i][j]);
        }
    }
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &coord[i][j]);
        }
    }
    for(int i = 0; i < y; i++)
    {
        int a = coord[i][0];
        int b = coord[i][1];
        int count = 0;          //轰炸了几次
        int num = 0;            //最后一次轰炸的轮次
        for(int j = 0; j < x; j++)
        {
            //判断关键点是否在轰炸区域 
            if (a <= area[j][2] && a >= area[j][0] && b <= area[j][3] && b >= area[j][1])
            {
                count++;
                num = j + 1;        //记录是第几轮轰炸
            }
        }
        if(count == 0)
        {
            printf("N\n");
        }
        else
        {
            printf("Y %d %d\n", count, num);
        }
    } 
    return 0;
}