// #include <stdio.h>
// int main()
// {
//     long int x, n;
//     scanf("%ld %ld", &n, &x);
//     long int a;
//     a = n;
//     while(a % x != 0)
//     {
//         a++;
//     }
//     printf("%ld", a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
// 	int m,n,i,temp;
// 	scanf("%d%d",&m,&n);
// 	int a[m];
// 	for(i=0;i<m;i++)	scanf("%d",&a[i]);
// 	for(i=0;i<m;i++){
// 		while(n>m)	n-=m;
// 		temp=(m-n+i)%m;
// 		printf("%d ",a[temp]);
// 	}
// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
    
//     return 0;
// }





#include <stdio.h>
int main()
{
    int n, N;
    scanf("%d", &n);
    int a[n];
    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &N);
    for(int i = 0; i < n; i++)
    {
        temp = (i + n - N) % n;
        printf("%d ", a[temp]);
    }
    return 0;
}

