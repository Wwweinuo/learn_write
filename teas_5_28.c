// #include <stdio.h>
// int main()
// {
//     int a, b ,s;
//     scanf("%d %d", &a, &b);
//     if(a > b)
//     {
//         s = b;
//     }
//     else
//     {
//         s = a;
//     }
//     int max, min;
    // for(int i = 1; i < s; i++)
    // {
    //     if(a % i == 0 && b % i == 0)
    //     {
    //         max = i;
    //         min = max * (a / i) * (b / i);
    //     }
    // }
//     printf("%d %d", max, min);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int min, a, b;
//     scanf("%d %d", &a, &b);
//     min = a < b ? a : b;
//     printf("%d", min);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int x0, y0;
//     int minnum;
//     int greatest_common_factor, lowest_common_multiple;
//     int count = 0;
//     scanf("%d %d", &x0, &y0);
//     for(int i = 1; i <= y0; i++)
//     {
//         for(int j = 1; j <= y0; j++)
//         {
//             minnum = i < j ? i : j;
//             for(int k = 1; k <= minnum; k++)
//             {
//                 if(i % k == 0 && j % k == 0)
//                 {
//                     greatest_common_factor = k;
//                     lowest_common_multiple = greatest_common_factor * (i / k) * (j / k);
//                 }
//             }
//             if(greatest_common_factor == x0 && lowest_common_multiple == y0)
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }



#include <stdio.h>
int main()
{
    int x, n;
    int num = 1;
    scanf("%d %d", &x, &n);
    for(int i = 0; i < n; i++)
    {
        num += num * x;
    }
    printf("%d", num);
    return 0;
}