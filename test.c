
//Shift+Alt+pgup 上下复制
/*Alt+上下   行垂直移动 */  
//


// #include <stdio.h>
// int main()
// {
//     int a,b,c,d;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b)
//     {
//         d = a;
//         a = b;
//         b = d;
//     }
//     if(a>c)
//     {
//         d = a;
//         a = c;
//         c = d;
//     }
//     if(b>c)
//     {
//         d = b;
//         b = c;
//         c = d;
//     }
//     printf("%d %d %d",a,b,c);
//     return 0;
// }



// //数组排序
// #include <stdio.h>
// int main()
// {
//     int a[]={9,8,5,4,2,0},i,j,count;
//     for(i=0;i<=4;i++)
//     {
//         for(j=0;j<5-i;j++)
//         {
//             if(a[j]>a[j+1])
//             count=a[j];
//             a[j]=a[j+1];
//             a[j+1]=count;
//         }
//     }
//     for(i=0;i<=5;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }




// #include <stdio.h>                       //有点问题
// int main()
// {
//     int a[2][3]={{1,2,3},{4,5,6}};
//     int b[3][2],i,j;
//     for(i=0;i<=1;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d",a[i][j]);
//             b[j,i]=a[i ,j];
//         }
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=1;j++)
//         {
//             printf("%4d",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2],i,j;
    printf("array a:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%5d",a[i][j]);
            b[j][i]=a[i][j];
        }
    printf("\n");
    }
    printf("array b:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}