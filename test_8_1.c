#include <stdio.h>
#include <math.h>
int main()
{
    long int n = 0;
    scanf("%ld", &n);
    long int yushu = 0;
    long int shang = 0;
    long int n1 = sqrt(n);
    for(long int i = 2; i <= n1; i++)
    {
        yushu = n % i;
        shang = n / i;
        if(yushu == 0)
        {
            //判断余数是否为素数
            long int j;
            for( j = 2; j <= sqrt(yushu); j++)
            {
                if(yushu % j == 0)
                {
                    break;
                }
            }
            if(j > sqrt(yushu))
            {
                //判断商是否为素数
                long int k;
                for(k = 2; k <= sqrt(shang); k++)
                {
                    if(shang % k == 0)
                    {
                        break;
                    }
                }
                if(k > sqrt(shang))
                {
                    printf("%ld", shang);
                }
            }
        } 
    }
    return 0;
}

