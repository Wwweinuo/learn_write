// #include <stdio.h>
// int main()
// {
//     int arr[10] = { 0 };
//     int* p = NULL;
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (p = arr; p < (arr + 10); p++)
//     {
//         printf("%d ", *p);
//     }
//     return 0;
// }



// #include <stdio.h>
// void invert(int a[], int n)
// {
//     int temp, m;
//     m = (n - 1) / 2;
//     for (int i = 0; i <= m; i++)
//     {
//         temp = a[i];
//         a[i] = a[n - i - 1];
//         a[n - i - 1] = temp;
//     }
//     return 0;
// }
// int main()
// {
//     void invert(int a[], int n);
//     int arr[10] = { 5, 4, 8, 6, 3, 2, 1, 7, 9, 0 };
//     int* p = arr;
//     // printf("请输入10个数");
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     scanf("%d", &arr[i]);
//     // }
//     invert(arr, 10);
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     for (p = arr; p < (arr + 10); p++)
//     {
//         printf("%d ", *p);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int count = 0;
//     //char str = "asdf";
//     char* my_strlen = "asd";
//     while (*my_strlen != '\0')
//     {
//         my_strlen++;
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// int my_strlen(char* str)
// {
//     int count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main()
// {
//     int my_strlen(char* str);
//     int len = my_strlen("asdsd");
//     printf("%d", len);
//     return 0;
// }



#include <stdio.h>
void search(float (*p)[4], int n)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%5.2f", *(*(p + n - 1) + i));
    }
    printf("\n");
}
int main()
{
    void search(float(*p)[4], int n);
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         scanf("%d", &score[i][j]);
    //     }
    // }
    float *p;
    p = score;
    float sum = 0;
    for(; p < (p + 12 - 1); p++)
    {
        sum += *p;
    }
    float average = sum / 12;
    int n;
    printf("请输入查找第几位同学>:");
    scanf("%d", &n); 
    search(score, n);

    return 0;
}