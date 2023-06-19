    // while (num) {
    //     int nums[100000];
    //     int count = 0;
    //     int sum = 0;
    //     for (int i = 1; i < num; i++) {
    //         if (num % i == 0) {
    //             nums[count] = i;
    //             count++;
    //             sum += i;
    //         }
    //     }  
    //     if (num == sum) {
    //         for (int i = 0; i < count; i++) {
    //             printf("%d", num);
    //         }
    //     }
    //     scanf("%d", &num);
    // }


//完数
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {        //遍历完数
        int sum = 0;
        int count = 0;
        int fact[100000] = {0};
        for(int j = 1; j < i; j++) {        //判断完数
            if (i % j == 0) {
                sum += j;                   //因子之和
                fact[count++] = j;          //储存因子
            }
        }
        //判断完数并储存
        if (sum == i) {
            printf("%d its factors are ", sum);
            for (int k = 0; k < count; k++) {
                printf("%d ", fact[k]);
            }
            printf("\n");
        }
        //输出
    }
    return 0;
}


// //网上抄的 有点问题
// #include <stdio.h>
// void wanshu(int n) {
//     int i,j=0;
//     int b=0;
//     int a[n];
//     for(i=1;i <= n; i++) {
//         if(n%i==0) {
//             a[j]=i;
//             b+=a[j];
//             j++;
//             }
//         }
//         if(b==n)//判断是否为完数 
//         { 
//             printf("%d its factors are ",n);
//             for(i=0;i < j;i++) {
//                 printf("%d ",a[i]);
//                 a[i]=0;
//             } 
//             printf("\n"); 
//         } 
//     } 
// int main() 
// { 
//     int i;
//     int n; 
//     scanf("%d ", &n);
//     for(i=2;i <= n;i++) {
//         wanshu(i);
//     }
//     return 0; 
// }