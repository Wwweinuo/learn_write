// #include<stdio.h>

// int main()
// {
//     int t,n;
//     double a[110],b[110];
//     scanf("%d",&t);

//     while(t--)
//     {
//         double score = 0;
//         scanf("%d",&n);
//         for(int i=0; i<n; i++) {
//             scanf("%lf", &a[i]);
//             score += a[i];
//         }
//         for(int i=0; i<n; i++)
//             scanf("%lf",&b[i]);
//         double ans = 0;
//         for(int i=0; i<n; i++)
//             if(b[i] >= 60)
//                 ans += (b[i] - 50) / 10 * a[i];

//         printf("%.2lf\n",ans/score);
//     }
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
            below += a[l];
            if(b[l] < 60)
            {
                c[l] = 0;
            }
            else
            {
                c[l] = a[l] * (b[l] - 50) / 10;
                up += c[l];
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