// #include <stdio.h>
// #include <stdlib.h>
// float Max = 0, Min = 0;
// int main()
// {
//     float average(float array[], int n);
//     float score[10], ave;
//     printf("请输入10个数:>");
//     for(int j = 0; j < 10; j++)
//     {
//         scanf("%f", &score[j]);
//     }
//     ave = average(score, 10);
//     printf("average=%.2f,Max=%.2f,Min=%.2f", ave, Max, Min);
//     return 0;
// }
// float average(float array[], int n)
// {
//     int ave, sum = 0;
//     Min = Max = array[0];
//     for(int i = 0; i < n; i++)
//     {
//         sum += array[i];
//         if(Max < array[i])
//         {
//             Max = array[i];
//         }
//         if(Min > array[i])
//         {
//             Min = array[i];
//         }
//     }
//     ave = (float)sum / n;
//     return ave;
// }




// #include <stdio.h>
// #include <stdlib.h>

// float Max = 0, Min = 0;

// float average(float array[], int n); // 函数原型声明

// int main()
// {
//     float score[10], ave;
//     printf("请输入10个数:>");
    
//     for(int j = 0; j < 10; j++)
//     {
//         scanf("%f", &score[j]);
//     }
    
//     ave = average(score, 10);
//     printf("平均值=%.2f,最大值=%.2f,最小值=%.2f", ave, Max, Min);
    
//     return 0;
// }

// float average(float array[], int n)
// {
//     int sum = 0; // 修正为 'sum' 以正确计算总和
//     Min = Max = array[0];
    
//     for(int i = 0; i < n; i++)
//     {
//         sum += array[i];
        
//         if(Max < array[i])
//         {
//             Max = array[i];
//         }
        
//         if(Min > array[i]) // 修改为 'if' 以正确更新最小值
//         {
//             Min = array[i];
//         }
//     }
    
//     float ave = (float)sum / n; // 使用浮点数除法以获得带有小数位的平均值
    
//     return ave;
// }


// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int *pointer_1, *pointer_2;
//     pointer_1 = &a;
//     pointer_2 = &b;
//     printf("*pointer_1=%d,*pointer=%d", *pointer_1, *pointer_2);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int *p1, *p2, *p, a, b;
//     printf("输入两个数:>");
//     scanf("%d %d", &a, &b);
//     p1 = &a;
//     p2 = &b;
//     if(a < b)
//     {
//         p = p1;
//         p1 = p2;
//         p2 = p;
//     }
//     printf("a=%d,b=%d\n", a, b);
//     printf("max=%d,min=%d", *p1, *p2);
//     return 0;
// }


#include <stdio.h>
int main()
{
    int array[3], max = 0;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
        if(max < array[i])
        {
            max = array[i];
        }
    }
    printf("%d", max);
    return 0;
}