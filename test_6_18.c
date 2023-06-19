// #include <stdio.h>
// int main()
// {
//     int x, y;
//     scanf("%d", &x);
//     if (x < 1)
//     {
//         y = x;
//     }
//     else if (x < 10)
//     {
//         y = x * 2 - 1;
//     }
//     else
//     {
//         y = 3 * x - 11;
//     }
//     printf("%d", y);
//     return 0;
// }




// //小递归
// #include <stdio.h>

// void print(unsigned n)
// {
//     if (n / 10 != 0)
//     {
//         print(n / 10);
//     }
//     printf("%d ", n % 10);
// }

// int main()
// {
//     void print(unsigned n);
//     unsigned num;
//     scanf("%u", &num);
//     print(num);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int a[100000] = { 0 };
//     a[1] = 1;
//     a[2] = 2;
//     int n;
//     scanf("%d", &n); 
//     int arr[n];
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         for (int j = 3; j <= arr[i]; j++)
//         {
//             a[j] = 2 * a[j - 1] + a[j - 2]; 
//         }
//     }
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n", a[arr[i]] % 32767);
//     }
//     for (int i = 0; i < 1000 ; i++)
//     {
//         printf("%d", a[i]);
//     }
//     return 0;
// }



// //pell数列
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[1000];
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         scanf("%d", &k);
        
//         int a = 1, b = 2;
//         int i;
        
//         for (i = 3; i <= k; i++) {
//             int temp = (2 * b + a) % 32767;
//             a = b;
//             b = temp;
//         }
//         arr[i] = b;
//     }
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }



// //创建一个数组存储每个数
// //分别求出[]所得出的数  存入数组   
// //求出数组中最小的数输出
// #include <stdio.h>
// int main()
// {
//     int n;                  
//     scanf("%d", &n);
//     int arr[n];             //创建一个数组存储每个数
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     //求arr中最小值和所有数之和
//     int min = arr[0], sum;
//     int num = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//             sum += arr[i];
//         }
//         num += i + 1;
//     }    
//     //求所有计算的数
//     int c[100000];  
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = arr[i] * arr[i];
//         c[n + i] = //没写完
//     }
//     c[num] = min * sum;
//     return 0;
// }



#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
//录入
    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        int min_num = nums[i];
        int sum = 0;
        for (int j = i; j < n; j++) {
            if (nums[j] < min_num) {
                min_num = nums[j];
            }
            //判断最小值
            sum += nums[j];
            int cur_sum = min_num * sum;
            if (cur_sum > max_sum) {
                max_sum = cur_sum;
            }
            //判断最大值（题目）
        }
    }

    printf("%d\n", max_sum);

    return 0;
}