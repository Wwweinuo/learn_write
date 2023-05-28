// #include<stdio.h>
// int main()
// {
//     char c1,c2,c3,c4,c5;
//     c1=getchar();
//     c2=getchar();
//     c3=getchar();
//     c4=getchar();
//     c5=getchar();
//     c1+=4;
//     c2+=4;
//     c3+=4;
//     c4+=4;
//     c5+=4;
//     putchar(c1);
//     putchar(c2);
//     putchar(c3);
//     putchar(c4);
//     putchar(c5);
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n, s;
    scanf("%d", &n);
    double g[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &s);
        double a[s], b[s], c[s], up, below;
        up = 0;
        below = 0;
        for(int j = 0; j < s; j++)
        {
            scanf("%lf", &a[j]);
        }
        for(int k = 0; k < s; k++)
        {
            scanf("%lf", &b[k]);
        }
        for(int l = 0; l < s; l++)
        {
            if(b[l] < 60)
            {
                c[l] = 0;
            }
            else
            {
                c[l] = a[l] * (b[l] - 50) / 10;
                up += c[l];
                below += a[l];
            }
        }
        g[i] = up / below;
    }
for(int i = 0; i < n; i++)
{
    printf("%.2lf\n", g[i]);
}
    return 0;
}



// #include <stdio.h>
// int main()
// {
//     int n, s;
//     scanf("%d", &n);
//     double g[120];
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d", &s);
//         float a[120], b[120], up, below;
//         up = 0;
//         below = 0;
//         for(int j = 0; j < s; j++)
//         {
//             scanf("%lf", a[j]);
//         }
//         for(int k = 0; k < s; k++)
//         {
//             scanf("%lf", b[k]);
//         }
//         for(int l = 0; l < s; l++)
//         {
//             if(b[l] < 60)
//             {
//                 c[l] = 0;
//             }
//             else
//             {
//                 c[l] = a[l] * (b[l] - 50) / 10;
//                 up += c[l];
//                 below += a[l];
//             }
//         }
//         g[i] = up / below;
//     }
// for(int i = 0; i < n; i++)
// {
//     printf("%.2f\n", g[i]);
// }
//     return 0;
// }