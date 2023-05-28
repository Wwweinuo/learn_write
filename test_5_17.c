// #include<stdio.h>
// int main()
// {
//     int a,b,c,count;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b)
//         count=a;
//     else
//         count=b;
//     if(a>c)
//         count=a;
//     else
//         count=c;
//     if(c>b)
//         count=c;
//     else
//         count=b;
//     printf("%d",count);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int i, c;
//     for(i=0;i<9;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     scanf("%d",&c);
//     int d;
//     for(i=0;i<8;i++)
//     {
//         if(c > a[i] && c < a[i+1])
//         {
//             d = i + 1;
//             break;
//         }
//     }
//     for(i=9;i>d;i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[d]=c;
//     for(i=0;i<=9;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[6];
//     scanf("%s", a);
//     int len = strlen(a);
//     printf("%d\n", len);
//     for(int i = 0;i < len; i++)
//     {
//         printf("%c", a[i]);
//         if(i < len - 1)
//             printf(" ");
//     }
//     printf("\n");
//     for(int i = len - 1; i >= 0; i--)
//     {
//         printf("%c", a[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[] = { 1, 2, 3, 4, 5 , 6, 7, 8, 9, 10 };
    int left = 0;
    int right = 9;
    int n;
    scanf("%d", &n);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] < n)
        {
            left = mid + 1;
        }
        else if (a[mid] > n)
        {
            right = mid - 1;
        }
        else
        {
            //printf("找到哦");
            printf("找到了 下标是；%d\n", mid);
            break;
        }
    }
    if (left > right)
        printf("该数组中没有\n");
    return 0;
}